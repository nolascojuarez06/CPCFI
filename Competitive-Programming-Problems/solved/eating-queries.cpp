#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, q, querie;
    
    cin >> t;
    while(t--) {
        cin >> n >> q;

        vector<int> candies(n);

        for(int i = 0; i < n; i++) {
            cin >> candies[i];
        }

        sort(candies.rbegin(), candies.rend());
        
        for(int i = 1; i < n; i++) {
            candies[i] += candies[i - 1];
        }

        for(int i = 0; i < q; i++) {
            cin >> querie;
            auto it = lower_bound(candies.begin(), candies.end(), querie);

            if(it != candies.end()) {
                cout << distance(candies.begin(), it) + 1 << "\n";
            }else{
                cout << "-1\n";
            }
        }

    }
}
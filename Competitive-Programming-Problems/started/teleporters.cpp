#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, res;
    long long n, c;

    cin >> t;
    while(t--) {
        cin >> n >> c;
        res = 0;
        vector<int> costs(n);

        for(int i = 0; i < n; i++){
            cin >> costs[i];
        }

        sort(costs.begin(), costs.end());

        for(int i = 1; i < n; i++) {
            costs[i] += costs[i - 1];
        }

        for(int i = 0; i < n && c > 0; i++) {
            c -= costs[i];
            res++;
        }

        cout << res << "\n";
    }
}
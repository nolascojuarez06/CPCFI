#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, k;
    long long sum;
    vector <int> barrels;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> barrels[i];
        }
        sort(barrels.begin(), barrels.end(), greater<int>());
        sum = barrels[0];
        for(int i = 0; i < k - 1; i++){
            sum += barrels[i + 1];
        }
        cout << sum << "\n";
    }

}
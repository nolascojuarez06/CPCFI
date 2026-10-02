#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, x;
    cin >> n;
    vector<int> piles(n);
    cin >> piles[0];
    for(int i = 1; i < n; i++){
        cin >> x;
        piles[i] = x + piles[i - 1];
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> x;
        auto it = lower_bound(piles.begin(), piles.end(), x) - piles.begin() + 1;
        cout << it << "\n";
    }
}
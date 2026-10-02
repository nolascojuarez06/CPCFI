#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, w, arns = 0;

    cin >> n >> w;

    vector<long long> weights(n);
    vector<long long> values(n);

    for(int i = 0; i < n; i++) {
        cin >> weights[i] >> values[i];
    }

    vector<vector<long long>> dp(n + 1, vector<long long> (w + 1, -1));

    for(int i = 0; i < n + 1; i++) {
        dp[i][0] = 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < w + 1; j++) {
            if(j - weights[i] > -1) {
                dp[i + 1][j] = max(dp[i][j], dp[i][j - weights[i]] + values[i]);
            }
            else{
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    for(int i = 0; i < w + 1; i++) {
        arns = max(arns, dp[n][i]);
    }

    cout << arns << "\n"; 
}
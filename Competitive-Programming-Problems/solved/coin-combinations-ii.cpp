#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    long long n, x;

    cin >> n >> x;

    vector<long long> coins(n);
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<long long> dp(x + 1);
    
    dp[0] = 1;

    for(int i = 0; i < n; i++) {
        for(int  j = 1; j <= x; j++) {
            if(j - coins[i] >= 0) {
                dp[j] = (dp[j] + dp[j - coins[i]]) % MOD;
            }
        }
    }

    cout << dp[x] << "\n";
}
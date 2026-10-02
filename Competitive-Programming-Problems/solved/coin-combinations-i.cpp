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

    for(int i = 1; i <= x; i++) {
        for(int  j = 0; j < n; j++) {
            if(i - coins[j] >= 0) {
                dp[i] = (dp[i] + dp[i - coins[j]]) % MOD;
            }
        }
    }

    cout << dp[x] << "\n";
}
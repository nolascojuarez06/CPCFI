#include <iostream>
#include <vector>

using namespace std;

const long long mod = 1e9 + 7;

int main() {
    int n;
    
    cin >> n;

    vector<long long> dp(n + 1);

    dp[0] = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 6; j++) {
            if(i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }

    cout << dp[n] << "\n";

    return 0;
}
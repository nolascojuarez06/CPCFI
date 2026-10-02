#include <iostream>
#include <vector>
# include <climits>

using namespace std;

int main() {
    int n; 

    cin >> n;

    vector<int> dp(n + 1, INT_MAX);

    dp[0] = 0;

    for(int i = 0; i <= n; i++) {
        for(char c : to_string(i)) {
            c = c - '0';
            dp[i] = min(dp[i], dp[i - (c)] + 1);
        }
        
    }

    cout << dp[n] << "\n";


}
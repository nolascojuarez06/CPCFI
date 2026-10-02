#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;

    cin >> n >> x;

    vector<int> prices(n);
    vector<int> pages(n);
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= x; j++) {
            if(j - prices[i] >= 0) {
                dp[i + 1][j] = max(dp[i][j], (dp[i][j - prices[i]]) + pages[i]);
            }else{
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    cout << dp[n][x] << "\n";
    

    return 0;
}
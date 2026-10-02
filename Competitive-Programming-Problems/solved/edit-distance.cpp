#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    string s1, s2;

    cin >> s1 >> s2;

    n = s1.length();
    m = s2.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for(int i = 0; i < n + 1; i++) {
        dp[i][0] = i;
    }

    for(int i = 0; i < m + 1; i++) {
        dp[0][i] = i;
    }

    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < m + 1; j++) {
            if(s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
            }
        }
    }

    cout << dp[n][m] << "\n";
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long l;
    double ans;

    cin >> n >> l;
    vector<int> lanterns(n);

    for(int i = 0; i < n; i++) {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    ans = lanterns[0];
    for(int i = 1; i < n; i++) {
        ans = max(ans, (double)(lanterns[i] - lanterns[i - 1]) / 2.0);
    }
    ans = max(ans, (double)(l - lanterns[n - 1]));

    cout << fixed << setprecision(10) << ans << "\n";

    return 0;
}
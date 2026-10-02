#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, x, a, b, c, res;
    cin >> n >> k;
    cin >> x >> a >> b >> c;
    
    vector<long long> arr(n);
    vector<long long> zum(n);
    arr[0] = x;
    zum[0] = x;
    for(int i = 1; i < n; i++){
        arr[i] = ((a * arr[i - 1] + b) % c);
        zum[i] = arr[i] + zum[i - 1];
    }

    res = zum[k - 1];
    for(int i = 0; i + k < n; i++){
        res ^= zum[i + k] - zum[i];
    }

    cout << res << "\n";
}
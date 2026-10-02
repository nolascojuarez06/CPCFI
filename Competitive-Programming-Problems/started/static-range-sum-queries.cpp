#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, q;

    cin >> n >> q;
    vector<long long> values(n);
    for(int i = 0; i < n; i++) {
        cin >> values[i];
    }

    for(int i = 1; i < n; i++) {
        values[i] += values[i - 1];
    }

    for(int i = 0; i < q; i++) {
        long long a, b;
        cin >> a >> b;
        if(a == 1){
            cout << values[b - 1] << "\n";
        }else{
            cout << values[b - 1] - values[a - 2] << "\n";
        }
    }
    return 0;
}
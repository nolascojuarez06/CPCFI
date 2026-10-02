#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long long n, q, l, r, k, zum, r1, r2;

    cin >> t;
    while(t--) {
        cin >> n >> q;
        vector<int> a(n + 1, 0);

        for(int i = 1; i < n + 1; i++) {
            int x;
            cin >> x;
            a[i] = x % 2 + a[i - 1];
        }

        zum = a[n + 1];
        for(int i = 0; i < q; i++) {
            cin >> l >> r >> k;
            r1 = 
        }
        


    }
}
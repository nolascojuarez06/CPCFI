#include <bits/stdc++.h>

using namespace std;

const unsigned int MOD = 10e9 + 7;

long long binpow(long long a, long long b) {
    if(b == 0) {
        return 1;
    }
    long long ans = binpow(a, b / 2);
    if(b % 2 == 1) {
        return ans * ans * a;
    } else {
        return ans * ans;
    }
}

int main() {
    long long n;
    long long a, b;

    cin >> n;

    while(n--) {
        cin >> a >> b;
        cout << binpow(a, b) % MOD << "\n";
    }

    return 0;
}
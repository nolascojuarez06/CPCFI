#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a * b)/gcd(a, b);
}

vector<int> factors(int n){
    vector<int> f;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            f.push_back(i);
            if(n/i != i){
                f.push_back(n/i);
            }
        }
    }
    return f;
}

int main(){
    int t, n, min_lcm;
    vector<int> f;
    pair<int, int> res = {1, n - 1};

    cin >> t;
    while(t--){
        cin >> n;
        min_lcm = n;
        f = factors(n);
        res = {1, n - 1};

        for(int i = 0; i < f.size(); i++){
            int x = n / f[i];
            int y = n - x;
            int l = lcm(x, y);
            if(min_lcm > l){
                min_lcm = l;
                res = {x, y};
            }
        }
        cout << res.first << " " << res.second << "\n";
    }
}
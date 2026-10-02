#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l;
    double res;
    cin >> n >> k >> l;
    res = (double)(n * k) / l;
    if(res - (int)res > 0.0){
        res = (int) res + 1;
    }
    cout << res << "\n";
}
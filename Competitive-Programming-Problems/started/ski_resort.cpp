#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t, n, k, q, xi;
    int cont, comb, res;
    cin >> t;
    while(t--){
        cin >> n >> k >> q;
        //vector<int> a(n);
        cont = 1;
        comb = 0;
        res = 0;
        for(int i = 0; i < n; i++){
            cin >> xi;
            if(xi <= q && cont >= q){
                comb++;
            }else if(i == n - 1){
                res += (comb * (comb +  1)) / 2;
                cont = 1;
                comb = 0;
            }
        }
        cout << res << "\n";
    }
}
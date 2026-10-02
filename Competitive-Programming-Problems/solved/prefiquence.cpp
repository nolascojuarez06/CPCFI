#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, m, k;
    string a, b;
    cin >> t;
    while(t--){
        cin >> n >> m;
        cin >> a >> b;
        k = 0;
        for(int i = 0, j = 0; j < n && i < m; i++){
            if(a[j] == b[i]){
                k++;
                j++;
            }
        }
        cout << k << "\n";
    }
}
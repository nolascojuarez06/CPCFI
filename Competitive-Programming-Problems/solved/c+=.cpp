#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, a, b, n, count;
    cin >> t;
    while(t--){
        count = 0;
        cin >> a >> b >> n;
        while(a <= n && b <= n){
            count++;
            if(a > b){
                b += a;
            }else{
                a += b;
            }
        }
        cout << count << "\n";
    }
}
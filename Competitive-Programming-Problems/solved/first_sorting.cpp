#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if(x > y){
            cout << y << " " << x << "\n";
        }else{
            cout << x << " " << y << "\n";
        }
    }
}
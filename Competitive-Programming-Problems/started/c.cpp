#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    int i;
    i = 1;
    while(i * 2 <= n){
        i *= 2;
    }

    cout << (n - i) * 2 << "\n";

    return 0;
}
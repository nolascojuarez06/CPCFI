#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, c = 0;
    cin >> n >> m;
    while(n < m){
        if(m % 2 != 0){
            m++;
        }else{
            m = m / 2;
        }
        c++;
    }
    c += n - m;
    cout << c << "\n";
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, xi, max = 0;
    cin >> n >> p;
    for(int i = 0; i < n; i++){
        cin >> xi;
        if(xi <= p && xi > max){
            max = xi;
        }
    }
    cout << max << "\n";
}
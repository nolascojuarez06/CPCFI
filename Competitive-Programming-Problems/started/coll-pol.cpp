#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, x = 0, count = 0;

    cin >> n;
    for(int i = 0, j; i < n + 1; i++){
        cin >> j;
        x <<= 1;
        x |= j;
    }

    /*while(x != 1){
        count++;
        if(x & 1){
            x = x ^ (x << 1) ^ 1;
        }else{
            x >>= 1;
        }
    }*/
    cout << x << "\n";
}
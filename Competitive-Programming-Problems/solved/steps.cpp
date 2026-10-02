#include <bits/stdc++.h>

using namespace std;

int main(){
    double x;
    cin >> x;
    x = (double)3000 / x;
    if(x - (int)x != 0.0){
        x = (int) x + 1;
    }
    if(x > 15){
        x = 15;
    }
    cout << x << "\n";
}
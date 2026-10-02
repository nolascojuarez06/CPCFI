#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, cont, mult;
    double n;
    cin >> t;
    while(t--){
        cont = 0, mult = 1;
        cin >> n;
        while(n > 9){
            cont++;
            while(n > 0.0){
                mult *= (int)n % 10;
                n /= 10;
            }
            n = mult;
            
        }
        cout << cont << "\n";
    }
}
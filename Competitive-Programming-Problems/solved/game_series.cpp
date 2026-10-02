#include <bits/stdc++.h>

using namespace std;

int main(){
    int a1, p1, a2, p2;
    cin >> a1 >> p1;
    cin >> a2 >> p2;
    if(a1 + a2 > p1 + p2){
        cout << "A\n";
    }else if (a1 + a2 < p1 + p2){
        cout << "P\n";
    }else{
        cout << "D\n";
    }
}
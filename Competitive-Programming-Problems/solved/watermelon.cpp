#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int weight = 0;
    cin >> weight;
    if(weight > 2 && weight % 2 == 0){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p, q, result = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p >> q;
        if((q - p) > 1){
            result += 1;
        }
    }
    cout << result << "\n";
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p, v, t, count;
    cin >> n;
    count = 0;
    for(int i = 0; i < n; i++){
        cin >> p >> v >> t;
        if(p + v + t > 1){
            count++;
        }
    }
    cout << count << "\n";
}
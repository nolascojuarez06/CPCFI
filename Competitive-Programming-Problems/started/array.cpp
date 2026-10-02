#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, s, x;
    cin >> t;
    while(t--){
        int sum = 0;
        cin >> n >> s >> x;
        for(int i = 0; i < n; i++){
            int xi;
            cin >> xi;
            sum += xi;
        }
        if(sum == s || ((s - sum) % x == 0 && s > sum)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
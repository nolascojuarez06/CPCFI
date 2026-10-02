#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    long long sum, sq, x;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            sum += x;
        }
        sq = (long long)sqrt(sum);
        if(sq * sq == sum){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
}
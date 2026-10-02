#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    bool res;
    cin >> t;
    while(t--){
        cin >> n;
        res = 0;

        vector<long long> h(n);
        vector<long long> d(n - 1);

        for(int i = 0; i < n; i++){
            cin >> h[i];
        }
        for(int i = 0; i < n - 1; i++){
            cin >> d[i];
        }

        for(int i = 0; i < n - 1; i++){
            if(h[i] <= d[i]){
                cout << "which\n";
                res = 1;
                break;
            }
        }
        if(!res){
            cout << "habibi\n";
        }
        
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, d;
    cin >> t;
    while(t--){
        cin >> n >> d;
        vector <int> piles;
        for(int i = 0; i < n; i++){
            cin >> piles[i];
        }
        int i = 1;
        while(d > 0 && i < n){
            if(piles[i] * i > d){
                piles[i]--;
            }else{
                piles[0] += piles[i];
                if(piles[i] > 0){
                    d -= i * piles[i];
                }
                i++;
            }
        }
        cout << piles[0] << "\n";
    }
}
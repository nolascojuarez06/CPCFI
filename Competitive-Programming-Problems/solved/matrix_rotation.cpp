#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, x;
    cin >> t;
    while(t--){
        vector<vector<int>> m(2, vector<int>(2, 1));
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                cin >> m[i][j];
            }
        }
        vector<vector<int>> mc(2, vector<int>(2, 1));
        int x = 0;
        while((m[0][0] > m[0][1] || m[1][0] > m[1][1] || m[0][0] > m[1][0] || m[0][1] > m[1][1]) && x < 3){
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    mc[i][j] = m[i][j];
                }
            }
            m[0][0] = mc[1][0];
            m[0][1] = mc[0][0];
            m[1][0] = mc[1][1];
            m[1][1] = mc[0][1];
            x++;
        }
        if(m[0][0] < m[0][1] && m[1][0] < m[1][1] && m[0][0] < m[1][0] && m[0][1] < m[1][1]){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
}
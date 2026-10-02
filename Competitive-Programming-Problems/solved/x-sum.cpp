#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, m, sum, temp;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 1));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> matrix[i][j];
            }
        }
        sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                temp = matrix[i][j];
                for(int k = 1; k < n && k < m; k++){
                    if(j - k >= 0 && i - k >= 0){
                        temp += matrix[i - k][j - k];
                    }
                    if(j + k < m && i + k < n){
                        temp += matrix[i + k][j + k];
                    }
                    if(j + k < m && i - k >= 0){
                        temp += matrix[i - k][j + k];
                    }
                    if(j - k >= 0 && i + k < n){
                        temp += matrix[i + k][j - k];
                    }
                }
                sum = max(sum, temp);
            }
        }
        cout << sum << "\n";
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    vector <int> results;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        int temp = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                temp = (i * n) + j + 1;
                if(i - 1 >= 0){
                    temp += ((i - 1) * n) + j + 1;
                }
                if(i + 1 < n){
                    temp += ((i + 1) * n) + j + 1;
                }
                if(j - 1 >= 0){
                    temp += (i * n) + j;
                }
                if(j + 1 < n){
                    temp += (i * n) + j + 2;
                }
                if(temp > sum){
                    sum = temp;
                }
            }
        }
        results.push_back(sum);
    }
    for(int i = 0; i < t; i++){
        cout << results[i] << "\n";
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, result;
    vector <int> results;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        if(n % 3 == 0){
            result = 0;
        }else{
            result = 3 - (n % 3);
        }
        results.push_back(result);
    }
    for(int i = 0; i < t; i++){
        cout << results[i] << "\n";
    }
}
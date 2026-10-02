#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, y, r, result;
    vector <int> results;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        cin >> y >> r;
        result = r + (int)(y / 2);
        if(result >= n){
            result = n;
        }
        results.push_back(result);
    }
    for(int i = 0; i < t; i++){
        cout << results[i] << "\n";
    }
}
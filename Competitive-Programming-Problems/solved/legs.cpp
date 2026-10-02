#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, result, c, temp;
    vector <int> results;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        result = 0;
        if(n % 2 == 0){
            c = (int) n / 2; // chickens
            result += 1;
            for(int j = c - 1; j > 0; j--){
                temp = n - (j * 2);
                if(temp % 4 == 0){
                    result += 1;
                }
            }
            if(n % 4 == 0){ // if it's possible only cows
                result += 1;
            }
        }
        results.push_back(result);
    }
    for(int i = 0; i < t; i++){
        cout << results[i] << "\n";
    }
}
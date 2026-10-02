#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, a1, b1, a2, b2;
    vector <string> results;
    bool result;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a1 >> b1;
        cin >> a2 >> b2;
        if((a1 + a2 == b1 && b1 == b2) || (b1 + b2 == a2 && a1 == a2)){
            result = true;
        }else if((a1 + b2 == b1 && b1 == a2) || (b1 + a2 == a1 && a1 == b2)){
            result = true;
        }else{
            result = false;
        }
        if(result == true){
            results.push_back("YES");
        }
        else{
            results.push_back("NO");
        }
    }
    for(int i = 0; i < t; i++){
        cout << results[i] << "\n";
    }
}
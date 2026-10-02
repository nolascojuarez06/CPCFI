#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        vector <string> words(n);
        for(int i = 0; i < n; i++){
            cin >> words[i];
        }
        string f1, f2;
        for(int i = 0; i < n; i++){
            f1 = s;
            f2 = s;
            f1.insert(0, words[i]);
            f2.append(words[i]);
            s = min(f1, f2);
        }
        cout << s << "\n";
    }
}
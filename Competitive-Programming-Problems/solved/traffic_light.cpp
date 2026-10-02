#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, x, j;
    char c;
    string s, loop;
    cin >> t;
    while(t--){
        cin >> n >> c;
        cin >> s;
        if(c == 'g'){
            cout << "0\n";
            continue;
        }
        x = 0;
        s += s;
        for(int i = 0; i < n; i++){
            if(s[i] == c){
                j = 0;
                while(i < n * 2 && s[i] != 'g'){
                    j++;
                    i++;
                }
                x = max(x, j);
            }
        }
        cout << x << "\n";
    }
}
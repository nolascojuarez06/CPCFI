#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q, n, s_int, temp;
    float s;
    string res;
    cin >> q;
    while(q--){
        cin >> n;
        vector <int> ms(12);
        fill(ms.begin(), ms.end(), 0);
        for(int i = 0; i < n; i++){
            cin >> s;
            s = log2(s);
            s_int = (int) s;
            if(s - s_int == 0.0 && s_int <= 11){
                ms[s_int]++;
            }
        }
        for(int i = 0; i < 11; i++){
            temp = (int) ms[i] / 2;
            ms[i + 1] += temp;
        }
        if(ms[11] > 0){
            res = "YES";
        }else{
            res = "NO";
        }
        cout << res << "\n";
    }
}
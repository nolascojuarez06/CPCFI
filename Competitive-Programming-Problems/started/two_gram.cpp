#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int temp;
    int res = 0;
    string s;
    string t;
    map<string, int> m;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n - 1; i++){
        t = s[i] + s[i + 1];
        m[t]++;
    };
    for(auto it = m.begin(); it != m.end(); it++){
        temp = it->second;
        if(res < temp){
            r = it->first;
        }
    }
    cout << r << "\n";
}
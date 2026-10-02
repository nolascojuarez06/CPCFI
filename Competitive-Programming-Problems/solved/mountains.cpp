#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int cont, res, max_z;

    cin >> s;
    cont = 0;
    res = 0;
    max_z = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+'){
            cont++;
            max_z = max(max_z, cont);
            if(cont == max_z){
                res = i;
            }
        }else{
            cont--;
        }
    }
    cout << res + 1 << "\n";
}
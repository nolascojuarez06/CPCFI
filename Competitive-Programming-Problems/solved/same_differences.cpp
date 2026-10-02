#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t, n;
    long long cont, x;
    cin >> t;
    while(t--){
        cin >> n;
        unordered_map<int, long long> differences;
        cont = 0;
        for(int i = 0; i < n; i++){ // aj - j = ai - i
            cin >> x;
            differences[x - i]++;
            cont += differences[x - i] - 1;
        }
        cout << cont << "\n";
    }
}

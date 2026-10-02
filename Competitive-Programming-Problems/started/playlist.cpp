#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    int j, cont;
    set<long long> repeated;

    cin >> n;
    vector<long long> playlist(n);
    for(int i = 0; i < n; i++){
        cin >> playlist[i];
    }

    j = 1;
    repeated.insert(playlist[0]);
    cont = 1;

    for(int i = 0; i + j < n; i++){
        auto it = repeated.find(playlist[j]);
        while(it == repeated.end() || i + j < n){
            repeated.insert(playlist[j]);
            j++;
            cont = max(cont, j);
            it = repeated.find(playlist[j]);
        }
        repeated.erase(playlist[i]);
    }
    cout << cont << '\n';
}
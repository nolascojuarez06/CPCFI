#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string name, n_name;
    unordered_map<string, int> db;
    cin >> n;
    while(n--){
        cin >> name;
        if(db.find(name) != db.end()){
            db[name]++;
            cout << name + to_string(db[name]) << "\n";
        }else{
            db[name] = 0;
            cout << "OK" << "\n";
        }
    }
}
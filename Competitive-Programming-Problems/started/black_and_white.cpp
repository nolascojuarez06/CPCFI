#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string x;
    int cont = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        queue<char> q;
        for(int j = 0; j < n; j++){
            if(!q.empty() && x[j] == q.front() && x[j] == 'N'){
                cont++;
            }else{
                q.pop();
                q.push(x[j]);
            }
        }
    }
    cout << cont << "\n";
}
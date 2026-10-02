#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, w, l, tx, ty; 
    cin >> n;
    cin >> w >> l >> tx >> ty;
    int xi, yi;
    vector<long long> a(n);
    vector<long long> r(n);

    for(int i = 0; i < n; i++){
        cin >> xi >> yi;
        a[i] = abs(((xi - tx)*(xi - tx)) + ((yi - ty)*(yi - ty)));
    }
    for(int i = 0; i < n; i++){
        cin >> xi >> yi;
        r[i] = abs(((xi - tx)*(xi - tx)) + ((yi - ty)*(yi - ty)));
    }
    sort(a.begin(), a.end());
    sort(r.begin(), r.end());

    int i = 1;
    char winner = ' ';
    if(a[0] < r[0]){
        winner = 'A';
        while(a[i] < r[0] && i < n){
            i++;
        }
    }else{
        winner = 'R';
        while(r[i] < a[0] && i < n){
            i++;
        }
    }
    cout << winner << " " << i << "\n";
}
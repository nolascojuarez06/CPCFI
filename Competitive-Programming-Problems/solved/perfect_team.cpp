#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q, c, m, x, t, avg, min_req;
    cin >> q;
    while(q--){
        cin >> c >> m >> x;
        avg = (c + m + x) / 3;
        min_req = min(c, m);
        t = min(min_req, avg);
        cout << t << "\n";
    }
}
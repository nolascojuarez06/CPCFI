#include <bits/stdc++.h>>

using namespace std;

int main(){
    int t, n, m, l;
    cin >> t;
    while(t--){
        cin >> n >> m >> l;
        queue<pair<int, int>> hurdles;
        int xi, yi;
        for(int i = 0; i < n; i++){
            cin >> xi >> yi;
            hurdles.push(pair(xi, yi - xi));
        }
        priority_queue<pair<int, int>> q;
        pair<int, int> temp;
        for(int i = 0; i < m; i++){
            cin >> xi >> yi;
            temp = hurldes.pop();
            if(xi < hurdles.pop().first)
            q.push(pair(yi, xi));
        }
    }
}
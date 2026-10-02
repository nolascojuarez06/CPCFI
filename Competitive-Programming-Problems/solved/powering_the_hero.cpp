#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, xi;
    long long sum;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++){
            cin >> xi;
            if(xi != 0){
                pq.push(xi);
            }else if(!pq.empty()){
                sum += pq.top();
                pq.pop();
            }
        }
        cout << sum << "\n";
    }
}
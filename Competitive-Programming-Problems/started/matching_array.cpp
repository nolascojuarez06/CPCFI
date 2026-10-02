#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, x;
    cin >> t;

    while(t--){
        cin >> n >> x;
        vector <pair<long long, int>> a(n);
        vector <pair<long long, int>> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            b[i].second = i;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i].first;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i = 0; i < n; i++){
            if(a[i].first > b[i].first && x > 0){
                b[i].second = a[i].second;
                x--;
                break;
            }else{
                cout << "NO\n";
            }
        }
        sort(b.begin(), b.end(), [](const pair<int,int>& p1, const pair<int, int>& p2){return p1.second > p2.second;});
        for(int i = 0; i < n; i++){
            cout << b[i].first;
        }
    }
}
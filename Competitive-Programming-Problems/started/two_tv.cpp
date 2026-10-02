#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, tv1 = 0, tv2 = 0;
    cin >> n;
    vector<pair<int, int>> shows(n);
    for(int i = 0; i < n; i++){
        cin >> shows[i].first >> shows[i].second;
    }

    sort(shows.begin(), shows.end());

    for(int i = 0; i < n; i++){
        if(tv1 < shows[i].first){
            tv1 = shows[i].second;
        }else if(tv2 < shows[i].first){
            tv2 = shows[i].second;
        }else{
            cout << "NO" << "\n";
            return 0;
        }
    }
    cout << "YES" << "\n";
}
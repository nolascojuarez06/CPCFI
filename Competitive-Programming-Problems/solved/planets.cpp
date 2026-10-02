#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, c,planet, cost;
    cin >> t;
    while(t--){
        map <int, int> orbits;
        cin >> n >> c;
        for(int i = 0; i < n; i++){
            cin >> planet;
            if(orbits.count(planet)){
                orbits[planet]++;
            }else{
                orbits[planet] = 1;
            }
        }
        cost = 0;
        for(auto x : orbits){
            if(x.second < c){
                cost += x.second;
            }else{
                cost += c;
            }
        }
        cout << cost << "\n";
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, w;
    long long x;
    cin >> t;
    while(t--){
        vector <int> niceness;
        x = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> w;
            niceness.push_back(w);
        }
        for(int i = 0; i < n - 1; i++){
            if(niceness[1] < 0 && abs(niceness[1]) > niceness[0]){
                x -= niceness[1];
                niceness.erase(niceness.begin() + 1);
            }else{
                x += niceness[0];
                niceness.erase(niceness.begin());
            }
        }
        cout << x << "\n";
    }
}

// abs(niceness[1]) > niceness[0]
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> segments(n);
    for(int i = 0; i < n; i++){
        cin >> segments[i];
    }
    sort(segments.begin(), segments.end());
    bool res = 0;
    for(int i = 0; i + 2 < n; i++){
        if(segments[i] + segments[i + 1] > segments[i + 2]){
            res = 1;
            break;
        }
    }
    if(res){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}
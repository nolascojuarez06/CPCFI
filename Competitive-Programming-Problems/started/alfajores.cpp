#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> alfajores(n);
    vector<int> offices(n);

    for(int i = 0; i < n; i++){
        cin >> alfajores[i];
    }
    for(int i = 0; i < m; i++){
        cin >> offices[i];
    }
    sort(offices.begin(), offices.end());
    for(int i = 0; i < n; i++){
        alfajores[i];
    }
}
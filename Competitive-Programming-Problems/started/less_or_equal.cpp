#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    if(a[k] - a[k - 1] > 1 || (k == n && a[n - 1] < 1000000000)){
        cout << a[k - 1] + 1 << "\n";
    }else{
        cout << "-1\n";
    }
}
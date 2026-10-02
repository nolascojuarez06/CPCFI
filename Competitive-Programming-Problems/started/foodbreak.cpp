#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, t;
   cin >> n >> t;
   int current = 0;
   int res = 0;
  vector <pair<int, int>> a(n);
  for (int i = 0; i < n; i++){
    cin >> a[i].first >> a[i].second;
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < n-1; i++){
    if(a[i+1].first > a[i].second){
        current = a[i+1].first - a[i].second;
        res = max(res, current);
    }
  }
  res = max(res, a[0].first);
  res = max(res, t - a[n-1].second);
  cout << res << endl;
}

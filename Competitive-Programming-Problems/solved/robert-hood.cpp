#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, d, k, x, y, min_v, max_v;
    
    cin >> t;
    while(t--){
        cin >> n >> d >> k;

        vector<int> days(n + 2, 0);

        for(int i = 0; i < k; i++) {
            cin >> x >> y;
            days[max(1, x - d + 1)]++;
            days[y + 1]--;
        }

        min_v = 1;
        max_v = 1;

        for(int i = 0; i + d - 1 < n; i++) {
            days[i + 1] += days[i];
            if(days[i + 1] < days[min_v]){
                min_v = i + 1;
            }
            if(days[i + 1] > days[max_v]){
                max_v = i + 1;
            }
        }
        cout << max_v << " " << min_v << "\n";
    }
}
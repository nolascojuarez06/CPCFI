#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long> numbers(n);
        for(int i = 0; i < n; i++){
            cin >> numbers[i];
        }
        sort(numbers.begin(), numbers.end());
        cout << max(numbers[0] * numbers[1], numbers[n - 2] * numbers[n - 1]) << "\n";
    }
}
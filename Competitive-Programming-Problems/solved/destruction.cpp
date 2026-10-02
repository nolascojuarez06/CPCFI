#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, x, size;
    long long sum;
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        vector <int> even;
        deque <int> odd;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x % 2 == 0){
                even.push_back(x);
            }else{
                odd.push_back(x);
            }
        }
        sort(odd.begin(), odd.end());
        if(odd.size() > 0){
            sum += odd.back();
            odd.pop_back();
            for(int i = 0; i < even.size(); i++){
                sum += even[i];     
            }
            while(odd.size() > 0){
                odd.pop_front();
                if(odd.size() > 0){
                    sum += odd.back();
                    odd.pop_back();
                }
            }
        }
        cout << sum << "\n";
    }
}
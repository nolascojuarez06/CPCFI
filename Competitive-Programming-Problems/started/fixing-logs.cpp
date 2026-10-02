#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, zum_a = 0, zum_b = 0, ans = 0;

    cin >> n;
    vector<pair<int, int>> weapons(n);

    for(int i = 0; i < n; i++) {
        cin >> weapons[i].first >> weapons[i].second;
        zum_a += weapons[i].first;
        zum_b += weapons[i].second;
    }

    if(zum_a != zum_b) {
        ans = abs(zum_a - zum_b);
    }

    for(int i = 0; i < n; i++) {
        if(weapons[i].first + weapons[i].second > zum_a + zum_b) {
            
        }
    }
}
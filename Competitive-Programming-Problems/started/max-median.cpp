#include <bits/stdc++.h>

using namespace std;

bool check(const vector<int>& numbers, long long mid, long long k){
    for(int i = 0; k > 0; i++) {
        if(numbers[(n / 2) + i] + k > numbers[(n / 2) + i + 1]) {
            
            return false;
        }
    }
}

int main() {
    long long n, k, l, r;
    
    cin >> n >> k;
    vector<int> numbers(n);

    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
        l = min(l, numbers[i]);
        r = max(r, numbers[i]);
    }

    sort(numbers.begin(), numbers.end());

    while(l <= r) {
        long long mid = l + (r - l) / 2;
        
        if(check(numbers, mid, k))
    }

    return 0;
}
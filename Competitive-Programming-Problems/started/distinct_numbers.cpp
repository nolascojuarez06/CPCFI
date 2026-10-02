#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    set<int> numbers;
    int xi;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> xi;
        numbers.insert(xi);
    }
    cout << numbers.size() << "\n";
}
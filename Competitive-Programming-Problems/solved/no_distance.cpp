#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    a = n - a;
    b++;
    cout << abs(a - b) - 1 << "\n";
}
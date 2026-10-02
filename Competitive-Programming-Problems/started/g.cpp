#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    char first;
    int i;

    getline(cin, s);

    first = s[0];
    i = first - 'A' + 1;

    cout << (i * 2) - 1 << "\n"; 
}
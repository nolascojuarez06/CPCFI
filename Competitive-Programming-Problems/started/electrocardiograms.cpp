#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, p;
    int n;

    cin >> s;
    for(int i = 0; i < n; i++) {
        cin >> p;
        for(int j = 0; j * s.length() < p.length(); j++) {
            for(int k = 0; k < s.length() && j * s.length() + k < p.length(); k++) {
                if(s[k] != p[j * s.length() + k]) {
                    cout << "No\n";
                }
            }
        }
    }
}
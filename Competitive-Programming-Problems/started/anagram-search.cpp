#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, p;
    int count;
    vector<int> f_p(26, 0);

    cin >> s >> p;

    for(char c : p) {
        f_p[c - 'a']++;
    }

    count = 0;
    for(int i = 0; i + p.lenght() < s.lenght(); i++) {
        vector<int> p_p = f_p;
    }
}
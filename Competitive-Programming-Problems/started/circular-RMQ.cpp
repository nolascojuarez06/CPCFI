#include <bits/stdc++.h>

using namespace std;

void build(vector<int>& t, vector<int>& a, int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(t, a, v*2, tl, tm);
        build(t, a, v*2+1, tm+1, tr);
        t[v] = t[v*2] < t[v*2+1] ? t[v*2] : t[v*2+1];
    }
}

void update(vector<int>& t, int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(t, v*2, tl, tm, pos, new_val);
        else
            update(t, v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2] < t[v*2+1] ? t[v*2] : t[v*2+1];
    }
}

int sum(vector<int>& t, int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(t, v*2, tl, tm, l, min(r, tm)) < sum(t, v*2+1, tm+1, tr, max(l, tm+1), r) ? sum(t, v*2, tl, tm, l, min(r, tm)) : sum(t, v*2+1, tm+1, tr, max(l, tm+1), r);
}

int main() {
    int n, m;
    long long lf, rg;
    cin >> n >> m;
    
    vector<int> t(4*n);
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    build(t, a, 1, 0, n - 1);

    //for(int i = 0; i < n; i++) {
      //  cin >> lf >> rg;
    //}
    cin >> lf >> rg;
    cout << sum(t, 0, lf, rg, )
}
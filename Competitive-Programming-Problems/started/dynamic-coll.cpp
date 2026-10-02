#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main() {
    int n, q;

    cin >> n >> q;
    ordered_set coll;

    for(int i = 0, x; i < n; i++){
        cin >> x;
        coll.insert(x);
    }

    for(int i = 0, op; i < q; i++) {
        cin >> op;
        if(op == 1) {
            int k;
            cin >> k;
            if(k > *coll.find_by_order(n - 1)) {
                coll.insert(k);
            }
            auto it = upper_bound(coll.begin(), coll.end(), k);
            auto it2
            if(coll.find_by_order(*it) - coll.find_by_order(*it + 1) == 0) {
                coll.insert(k);
            } else {
                coll.erase(*it);
                coll.insert(k);
            }
        } else {
            int a, b;
            cin >> a >> b;
            auto low = lower_bound(coll.begin(), coll.end(), a);
            auto high = lower_bound(coll.begin(), coll.end(), b);
            cout << *high - *low << "\n";
        }
    }
return 0;
}
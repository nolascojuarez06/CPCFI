#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> parent;
vector<int> ranks;

void make_set(int v){
    parent[v] = v;
    ranks[v] = 0;
}

int find_set(int v){
    if (parent[v] == v) return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a != b){
        if(ranks[a] < ranks[b]) swap(a,b);
        parent[b] = a;
        if(ranks[a] == ranks[b]) ranks[a]++;
    }
}

struct Edge{
    int u,v,w;
    bool operator < (Edge const &other){return w < other.w;}
};

int main(){
    int n, m; 
    long long cost = 0;
    vector<Edge> mst;

    cin >> n;
    cin >> m;

    parent.resize(n + 1);
    ranks.resize(n + 1);
    vector<Edge> edges(m);

    for(int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    for(int i = 1; i < n + 1; i++) {
        make_set(i);
    }

    sort(edges.begin(), edges.end());

    for(auto &e : edges){
        if (find_set(e.u) != find_set(e.v)) {
            cost += e.w;
            mst.push_back(e);
            union_sets(e.u, e.v);
        }
    }

    if(mst.size() != n - 1 && n > 0) {
        cout << "IMPOSSIBLE\n";
    } else {
        cout << cost << "\n";
    }

    return 0;
}

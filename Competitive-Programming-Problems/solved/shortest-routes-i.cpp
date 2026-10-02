#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

vector<long long> dijkstra(vector<vector<pair<long long,long long>>>& adj, long long src) {

    long long V = adj.size();

    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;

    vector<long long> dist(V, LLONG_MAX);

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();

        long long d = top.first;  
        long long u = top.second; 

        if (d > dist[u])
            continue;

        for (auto &p : adj[u]) {
            long long v = p.first; 
            long long w = p.second; 

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;   
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}


int main() {
    long long n, m, a, b, c, src = 0;
    
    cin >> n >> m;

    vector<vector<pair<long long, long long>>> adj(n);

    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        adj[a - 1].push_back({b - 1, c});
    }

    vector<long long> result = dijkstra(adj, src);

    for (int i = 0; i < n; i++) {
        cout << result[i];
        if(i != n - 1) {
            cout << " ";
        } else {
            cout << "\n";
        }
    }

    return 0;
}

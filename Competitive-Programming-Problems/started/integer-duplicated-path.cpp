#include <iostream>
#include <vector>

using namespace std;

vector<int> dfs(vector<pair<int, vector<int>>>& adj) {
    int n = adj.size();
    
    vector<bool> visited(n, false);
    vector<int> res;
    
    stack<int> st;
    st.push(0);
    
    while (!st.empty()) {
        int node = st.top();
        st.pop();
        
        if (visited[node] == true) {
            continue;
        }
        
        visited[node] = true;
        res.push_back(node);
        
        int size = adj[node].second.size();
        for (int i = size - 1; i >= 0; i--) {
            int v = adj[node].second[i];
            if (!visited[v]) st.push(v);
        }
    }
    
    return res;
}

int main() {
    int n;
    
    cin >> n;

    vector<pair<int, vector<int>>> adj(n);

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        adj[i].first = x;
    }

    for(int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;
        adj[x].second.push_back(y);
        adj[y].second.push_back(x);
    }

    dfs(adj);
}
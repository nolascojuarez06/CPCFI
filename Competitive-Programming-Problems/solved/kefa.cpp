#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+2;

vector<vector<int>> adj(MAX);
bool vis[MAX];
vector<int> cats(MAX);
int m;
long long cont = 0;

void dfs(int s, int c){
    vis[s] = true;
    if(cats[s] != 0){
        c++;
    }else{
        c = 0;
    }
    if(c > m){
        return;
    }
    bool rest = true;
    for(int u : adj[s]){
        if(!vis[u]){
            rest = false;
            dfs(u, c);
        }
    }
    if(rest){
        cont++;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, u, v;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> cats[i + 1];
    }
    for(int i = 0; i < n - 1; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);
    cout << cont << "\n";
}
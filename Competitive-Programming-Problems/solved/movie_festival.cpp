#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> movies;
    for(int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        movies.push_back({start, end});
    }

    sort(movies.begin(), movies.end(), [](const pair<int,int>& p1, const pair<int, int>& p2){return p1.second < p2.second;});

    int cont = 1;
    int end = movies[0].second;

    for(int i = 0; i < n; i++){
        if(movies[i].first >= end){
            cont++;
            end = movies[i].second;
        }
    }
    cout << cont << "\n";
    return 0;
}
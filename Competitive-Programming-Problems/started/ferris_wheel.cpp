#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> children(n);
    vector<bool> visited(n,false);
    for(int i = 0; i < n; i++){
        cin >> children[i];
    }
    sort(children.begin(),children.end());
    for(int i=0;i<n;i++){
        int l=i;
        int r=n;
        while(l<=r){
            int m=(l+r)/2;
            if(children[i]+children[m]>x)

        }
    }
    return 0;


}
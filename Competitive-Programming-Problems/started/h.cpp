#include <bits/stdc++.h>

using namespace std;


double best(int n, int i, int k, vector<double> cont, vector<double> exp, vector<int> w){
    if(i == n + 1){
        return n;
    }
    return max(w[i - 1], 2, 3);
}

int main(){
    int n;
    
    cin >> n;
    vector<int> w(n + 2);
    vector<double> cont(n + 2);
    vector<double> exp(n + 2);

    w[0] = 0;
    w[n + 1] = n;
    for(int i = 0; i < n; i++){
        cin >> w[i + 1];
    }

    for(int i = 0; i < n; i++){
        cin >> cont[i];
    }
    for(int i = 0; i < n; i++){
        cin >> exp[i];
    }

}
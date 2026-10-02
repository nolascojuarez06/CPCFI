#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, result, sum, int_av;
    float av;
    cin >> n;
    result = 0;
    sum = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
    }
    while(true){
        av = (float) sum / n;
        int_av = (int) sum / n;
        if(av - int_av == 0.0){
            break;
        }
        result += 1;
        n = n - 1;
    }
    cout << result << "\n";
}
/*#include <bits/stdc++.h>
using namespace std;

long long sum_factors(long long n){
    long long sum = 1;
    if(n == 1) sum = 0;
    for (long long p = 2; p * p < n; ++p) {
        while (n % p == 0) {
            sum += p;
            n /= p;
        }
    }
    return sum;
}

int main() {
    long long t, n, sum;
    cin >> t;
    while(t--){
        if (!(cin >> n)) return 0;

        bool Perfecto = 0, Romantico = 0, Abundante = 0;

        sum = sum_factors(n);
        if(sum == n){
            Perfecto = 1;
        }
        if(n == sum_factors(sum)){
            Romantico = 1;
        }
        if(n < sum){
            Abundante = 1;
        }

        cout << n << " ";
        cout << sum << " ";

        if(Perfecto){
            cout << "perfecto";
        } else if (Romantico || Abundante) {
            if (Romantico) cout << "romantico";
            if (Abundante) {
                if (Romantico) cout << ' ';
                cout << "abundante";
            }
        } else {
            cout << "complicado";
        }
        cout << '\n';
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    if (!(cin >> n)) return 0;
 
    vector<pair<long long, long long>> Factores;
    for(long long p = 2; p * p <= n; ++p) {
        while (n % p == 0) {
            if(Factores[Factores.size() - 1].first == p){
                Factores[Factores.size() - 1].second++;
            }else{
                Factores.push_back({p, 1});
            }
            n /= p;
        }
    }
    
    if(Factores.empty()){
        cout << "1\n";
        return 0;
    }

    for(int i = 0; i < Factores.size(); ++i) {
        cout << Factores[i].first <<"( " << Factores[i].second << " )";
    }
    cout << '\n';
    return 0;
}
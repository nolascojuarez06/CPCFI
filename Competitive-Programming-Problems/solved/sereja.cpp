#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long s = 0, d = 0;
    cin >> n;
    deque<int> cards(n);
    for(int i = 0; i < n; i++){
        cin >> cards[i];
    }
    for(int i = 0; i < n; i ++){
        if(cards.back() > cards.front()){
            if(i % 2 == 0){
                s += cards.back();
            }else{
                d += cards.back();
            }
            cards.pop_back();
        }else{
            if(i % 2 == 0){
                s += cards.front();
            }else{
                d += cards.front();
            }
            cards.pop_front();
        }
    }
    cout << s << " " << d << "\n";
}
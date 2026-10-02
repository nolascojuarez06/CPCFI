#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<char> stc;
    char c;
    while(cin >> c){
        if(c != '*'){
            stc.push(c);
        }else if(!stc.empty()){
            stc.pop();
        }
    }
    while(!stc.empty()){
        cout << stc.top();
        stc.pop();
    }
    cout << "\n";
    return 0;
}
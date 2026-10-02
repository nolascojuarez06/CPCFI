#include<bits/stdc++.h>

using namespace std;

int is_first(char c){
    string str = "({[";
    return (str.find(c) != string::npos);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<char> stc;
    char c;
    while(cin >> c){
        if(is_first(c)){
            stc.push(c);
        }else if(!stc.empty()){
            stc.pop();
        }
    }

    if(stc.empty()){
        cout << "true\n";
    }else{
        cout << "false\n";
    }
    
    return 0;
}
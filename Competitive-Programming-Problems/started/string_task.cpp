#include <bits/stdc++.h>

using namespace std;

int is_vowel(char c){
    string str = "aeiouyAEIOUY";
    return (str.find(c) != string::npos);
}

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(!is_vowel(s[i])){
            s[i] = tolower(s[i]);
            cout << "." << s[i];
        }
    }
    cout << "\n";
}
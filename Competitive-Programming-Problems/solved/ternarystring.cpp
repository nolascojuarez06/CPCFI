#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define FOR(i,a,b) for(int i=a;i<b;i++)

int main(){
   int t;cin>>t;
   while(t--){
    string seq;cin>>seq;
    vector<int> table(4); //keeps track if 1,2,3 is currently in the substriing
    table[0]=0;
    table[1]=0;
    table[2]=0;
    table[3]=0;
    
    int l=0;
    int count=0;
    int ans=seq.size()+1;//min poss length;
    FOR(i,0,seq.size()){
        table[seq[i]-'0']++;
        count++;
        while(table[1]>0&&table[2]>0&&table[3]>0&&l<seq.size()){
            ans=min(ans,count);
            table[seq[l]-'0']--;
            count--;
            l++;

        }
    }
    if(ans==seq.size()+1)cout<<"0\n";
    else cout<<ans<<"\n";
   }
   return 0;
}
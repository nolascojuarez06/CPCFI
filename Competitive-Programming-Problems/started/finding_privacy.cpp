#include <bits/stdc++.h>
using namespace std;

int main(){
   int k, n;
   //people toilets
   cin >> k >> n;
   bool pos=true;
   int nmin,nmax;
   if(n%2==0){
        nmax=n/2;
        if(n%3==0){
            nmin=n/3;
        }
        else{
            nmin=(n/3)+1;
        }
        if(!(k>=nmin&&k<=nmax))pos=false;
   }
   else{
        nmax=(n/2)+1;
        if(n%3==0){
            nmin=n/3;
        }
        else{
            nmin=(n/3)+1;
        }
        if(!(k>=nmin&&k<=nmax))pos=false;
   }
   if(pos){
        for(int i=0;i<n)
   }
   else{
        cout<<"*\n";
   }
   return 0;
}

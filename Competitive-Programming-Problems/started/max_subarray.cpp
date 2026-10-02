#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, ans, sum, x;
    cin >> n;
    vector<int> arr(n);
    cin>>arr[0];
    int v=arr[0];
    if(v==0)v=1;
    else v=-1;
    ans=v;
    sum = ans;
    int r=0,l=0;
    int lo=0,ro=0;

    for(int i = 1; i < n; i++){
        cin >> x;
        arr[i]=x;
        if(x==0)x=1;
        else x=-1;
        
        //max_zum = max(max_zum + x, x);
        if(sum+x<x){
            sum=x;
            l=i;
            r=i;
        }
        else{
            sum+=x;
            r++;
        }
        //zum = max(zum, max_zum);
        if(ans<sum){
            ans=sum;
            lo=l;
            ro=r;
        }
    }
    for(int i=lo;i<ro;i++){
        if(arr[i]==0)arr[i]=1;
        else arr[i]=0;
    }
    long long count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)count++;
    }
    cout << count << "\n";
}
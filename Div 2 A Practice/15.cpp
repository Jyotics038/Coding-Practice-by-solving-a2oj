#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main(){
    ll n;
    cin>>n;
    ll x[n],y[n],z[n];
    ll sumx=0,sumy=0,sumz=0;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    for(int i=0;i<n;i++){
        sumx+=x[i];
    }
    for(int i=0;i<n;i++){
        sumy+=y[i];
    }
    for(int i=0;i<n;i++){
        sumz+=z[i];
    }
    if(sumx==0&&sumy==0&&sumz==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
   
 
return 0;
}
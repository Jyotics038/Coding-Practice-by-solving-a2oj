#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

 ll n;
 cin>>n;
 ll a[n];
 bool flag=1;
 for(int i=0;i<n;i++){
        cin>>a[i];
 }
 map<int,int>mpp;
 for(int i=0;i<n;i++){
        mpp[a[i]]++;
 }
 for(auto s:mpp){
        if(s.second>1){
        if(s.second >(n+1)/2){
               flag=0;
        }
       }
 }
 if(flag){
 cout<<"YES\n";}
 else{
        cout<<"NO\n";
 }
 
  
  return 0;
}


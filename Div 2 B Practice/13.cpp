//Jzzhu and Sequences
#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
#define mod 1000*1000*1000+7
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll x,y;
  cin>>x>>y;
  ll n;
  cin>>n;
  n=n%6;
  int val;
  if(n==0){
     val=(x-y+mod+mod+mod+mod);
    val%=mod;
  }else if(n==1){
    val=(x+mod+mod);
    val%=mod;
  }else if(n==2){
     val=(y+mod+mod);
    val%=mod;
  }else if(n==3){
     val=(y-x+mod+mod+mod+mod);
    val%=mod;
  }else if(n==4){
     val=(-x+mod+mod);
    val%=mod;
  }else{
     val=(-y+mod+mod);
    val%=mod;
  }
  cout<<val<<endl;
  
  return 0;
}

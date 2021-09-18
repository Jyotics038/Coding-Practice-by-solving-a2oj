#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;




void solve(){
  ll n,t;
  cin>>n>>t;
  ll a[n];
  ll i;
  for( i=0;i<n;i++){
    cin>>a[i];
  }
  ll j=-1;
  
  ll sum=0;
  ll ans=0;
  for(i=0;i<n;i++){
    if(sum+a[i]<=t){
       sum+=a[i];
    }else{
      sum+=a[i];
      while(sum>t){
        j++;
        sum-=a[j];
      }
    }
    ans=max(ans,i-j);
  }
cout<<ans<<endl;

}



int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   
   ll t=1;
   // cin>>t;
   while(t--){
    solve();
   }
   return 0;
 }

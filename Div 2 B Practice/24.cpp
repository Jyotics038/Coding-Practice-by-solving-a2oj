#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;


void solve(){
  ll n,k;
  cin>>n>>k;
  ll a[n];
  ll mini=5000;
  ll maxi=-1;
  for(int i=0;i<n;i++){
    cin>>a[i];
    mini=min(mini,a[i]);
    maxi=max(maxi,a[i]);
  }

  if(maxi-mini-k<=0){
    cout<<"YES\n";
    for(int i=0;i<n;i++){
      int kk=1;
      for(int j=0;j<a[i];j++){
        if(j<=mini){
          cout<<1<<" ";
        }else{
          kk++;
          cout<<kk<<" ";
        }
      }
      cout<<endl;
    }
  }
else{
  cout<<"NO\n";
}
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

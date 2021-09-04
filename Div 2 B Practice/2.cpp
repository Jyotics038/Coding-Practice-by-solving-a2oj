#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;



int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   ll n,m;
   cin>>n>>m;
   ll ans=0;
   ll a;
   ll init=1;
   for(int i=0;i<m;i++){
     cin>>a;
     if(a>=init) ans+=a-init;
     else
      ans+=n-(init-a);
    init=a;

   }
   cout<<ans<<endl;
  return 0;
}

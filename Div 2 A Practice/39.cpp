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
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   ll c=0;
   ll d=30000;
   ll i;
   for(i=2;i<=n;i++){
     c=max(c,a[i]-a[i-1]);
   }
   for(i=2;i<n;i++){
    d=min(d,max(c,a[i+1]-a[i-1]));
   }
   cout<<d<<endl;
 
  return 0;
}





 
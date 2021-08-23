#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int_fast32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

   ll n;
   cin>>n;
   ll a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   ll ans=__gcd(a[0],a[1]);
   for(int i=2;i<n;i++){
      ans=__gcd(ans,a[i]);
   }
   
   cout<<ans*n<<endl;
 
  return 0;
}


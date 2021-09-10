//Roadside Trees (Simplified Edition)
#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;



int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   
   int ans=0;
   ll n;
   cin>>n;
   ans=n+n-1;
   ll a[n];
   
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   ans+=a[0];
   for(int i=0;i<n-1;i++){
    ans+=abs(a[i]-a[i+1]);
   }
   cout<<ans<<endl;
    
  return 0;
}

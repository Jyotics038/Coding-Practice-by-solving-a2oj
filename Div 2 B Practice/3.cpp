#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;



int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   ll n,m,k;
   cin>>n>>m>>k;
   ll a[m+1];
   for(int i=0;i<m+1;i++){
    cin>>a[i];
   }

   ll x;
   
   ll sum=0;
   for(int i=0;i<m;i++){
    x=a[i]^a[m];
    ll count;
   count=__builtin_popcount(x);

     
   if(count<=k) sum++;
   }
   
   cout<<sum<<endl;
  return 0;
}

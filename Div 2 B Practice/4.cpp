#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;



int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   ll m,n;
   cin>>n>>m;
   ll maxi,mini;
   maxi=((n-(m-1))*(n-(m-1)-1)/2);
   int si=n/m;
   int rem=n%m;
   mini=rem*(si+1)*(si)/2 +(m-rem)*(si)*(si-1)/2;
   cout<<mini<<" "<<maxi<<endl;
  return 0;
}

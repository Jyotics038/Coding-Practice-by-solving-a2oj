#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

   ll n,c;
   cin>>n>>c;
   ll a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int maxi=0;
   for (int i = 0; i < n - 1; i++) {
         int res = a[i] - a[i + 1] - c;
         maxi = max(res, maxi);
      }
      cout << maxi << endl;
 
  return 0;
}





 
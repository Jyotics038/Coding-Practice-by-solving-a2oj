#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

 ll y,k,n;
 cin>>y>>k>>n;
 //if(y>=n) cout<<"-1\n";
 int x=k - y%k;
 if(x+y>n) cout<<"-1\n";
 for(int i=x;i<=n-y;i+=k){
        //if(i+y <= n && (i+y)%k == 0){
               cout<<i<<" ";
        //}
 }
  
  return 0;
}



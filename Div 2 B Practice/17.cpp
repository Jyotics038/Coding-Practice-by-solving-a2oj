//Little Elephant and Magic Square
#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

void solve(){
  ll a,b,c,d,e,f,g,h,i;
  cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
  ll sum=(a+b+c+d+e+f+g+h+i)/2;
  a=sum-b-c;
  e=sum-d-f;
  i=sum-g-h;
  cout<<a<<" "<<b<<" "<<c<<endl;
  cout<<d<<" "<<e<<" "<<f<<endl;
  cout<<g<<" "<<h<<" "<<i<<endl;

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


#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int_fast32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

   ll k;
   cin>>k;
   ll n;
   cin>>n;
   double h=log(n)/log(k);
   int hh=(int)(h+1e-12);
   if(abs(h-hh)<1e-12){
    cout<<"YES\n";
    cout<<hh-1<<endl;
   }else{
    cout<<"NO\n";
   }
 
  return 0;
}



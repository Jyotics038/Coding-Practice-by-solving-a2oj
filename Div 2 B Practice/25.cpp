#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;


void solve(){
  ll n;
  cin>>n;
  vector<int> a1,a2;
  ll sum1=0;
  ll sum2=0;
  bool last=true;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x>=0){
      a1.push_back(x);
      sum1+=x;
      last=true;
    }
    else{
      last=false;
      x*=-1;
      a2.push_back(x);
      sum2+=x;
    }
  }
  if(sum1>sum2){
    cout<<"first\n";
  }else if(sum1<sum2){
    cout<<"second\n";
  }
  else{
    if(a1>a2){
      cout<<"first\n";
    }
    else if(a1<a2){
      cout<<"second\n";
    }
    else{
      if(last){
         cout<<"first\n";
      }else{
         cout<<"second\n";
      }
    }
  }
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

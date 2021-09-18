#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;


void solve(){
  ll p,q,l,r;
  cin>>p>>q>>l>>r;
  vector<pair<int,int>>v1,v2;
  for(int i=0;i<p;i++){
     ll x,y;
     cin>>x>>y;
     v1.push_back(make_pair(x,y));
  }
  for(int i=0;i<q;i++){
     ll x,y;
     cin>>x>>y;
     v2.push_back(make_pair(x,y));
  }
  int ans=0;
  for(int i=l;i<=r;i++){
    bool flag=false;
    for(int j=0;j<p;j++){
      for(int k=0;k<q;k++){
        if(v1[j].first>=v2[k].first+i&&
          v1[j].first<=v2[k].second+i){
          flag=true;
        }
        if(v2[k].first+i>=v1[j].first&&
          v2[k].first+i<=v1[j].second){
          flag=true;
        }
      }
    }
    if(flag){
      ans++;
    }
  }
cout<<ans<<endl;

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

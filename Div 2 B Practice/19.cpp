//Football Kit
#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

void solve(){
  ll n;
  cin>>n;
  map<int,int>hm;
  ll a[n][2];
  for(int i=0;i<n;i++){
    cin>>a[i][0]>>a[i][1];
    hm[a[i][0]]++;
  }
  int match=2*(n-1);
  for(int i=0;i<n;i++){
    int hm_dress=n-1+ hm[a[i][1]];
    int away_dress=match-hm_dress;
    cout<<hm_dress<<" "<<away_dress<<"\n";
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


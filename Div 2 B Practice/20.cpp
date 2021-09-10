//Little Girl and Game
#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

void solve(){
  string s;
  cin>>s;
  map<char,int>mp;
  for(char i:s){
    mp[i]++;
  }
  int odd=0;
  for(auto i:mp){
    if(i.second %2==1){
      odd++;
    }
  }
  if(odd%2==1 || odd==0){
    cout<<"First\n";
  }else{
    cout<<"Second\n";
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

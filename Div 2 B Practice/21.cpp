#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
#define mod 1000*1000*1000+7

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;

//#define ordered_set tree<int , null_type ,  less<int> ,  rb_tree_tag ,  tree_order_statistics_node_update >

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,m;
  cin>>n>>m;
  ll a[m];
  for(int i=0;i<m;i++){
    cin>>a[i];
  }
  // if(m==0){
  //   cout<<"YES\n";
  // }
  
  sort(a,a+m);
  if(a[0]==1||a[m-1]==n){
    cout<<"NO\n";
    return 0;
  }
  bool flag=true;
  for(int i=0;i<m-2;i++){
    if(a[i+2]==a[i]+2){
      flag=false;
     break;
    }
    
  }
  if(flag){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
  
  return 0;
//Little Pony and Sort by Shift
#include <bits/stdc++.h>
typedef long long ll;
#define int long long int

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  ll a[n];
  ll co=0;
  ll pos=0;
  for(int i=1;i<=n;i++){
    
    cin>>a[i];
  }
    for(int i=2;i<=n;i++){
      if(a[i-1]>a[i]){
        co++;
        pos=i;
      }
      if(co>=2) break;
    }
    if(co==1&&a[1]>=a[n])
      cout<<n-pos+1<<endl;
    else if(co==0)
      cout<<0<<endl;
    else{
      cout<<-1<<endl;
    }
  
  
  return 0;
}


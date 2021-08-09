#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int32_t main(){
  int t=0;
  ll n,x;
  cin>>n>>x;
  ll l,r;
  int sum;
  int temp=0;
  for(int i=0;i<n;i++){
    cin>>l>>r;
  
   sum=0;
  
  while(1){
    t=t+x;
    if(t>=l){
      t=t-x;
      sum=sum+(r-t);
      t=t+sum;
      break;
    }
  }
 temp=temp+sum;
}
cout<<temp<<endl;
  return 0;
}

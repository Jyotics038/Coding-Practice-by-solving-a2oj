//Find Marble
#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;



int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   
   ll n,s,t;
   cin>>n>>s>>t;
   ll p[n];
   for(int i=1;i<=n;i++){
    cin>>p[i];
   }
    int step=0;
    while(s!=t&&p[s]!=0){
      int temp=p[s];
      p[s]=0;
      s=temp;
      step+=1;
    }
    cout<<(s==t?step:-1)<<endl;
  return 0;
}
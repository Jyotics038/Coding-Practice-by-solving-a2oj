#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main(){
    ll n,m;
    cin>>n>>m;
    ll a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    ll mini=1000;
    for(int i=n;i<=m;i++){
      mini=min(mini,abs(a[i-1]-a[i-n]));
    }
    cout<<mini<<endl;
    
return 0;
}
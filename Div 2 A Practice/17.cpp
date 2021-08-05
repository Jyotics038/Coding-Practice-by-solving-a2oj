#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll s=a+b+c;
    ll t=a*b*c;
    ll u=a+b*c;
    ll v=a*b+c;
    ll w=(a+b)*c;
    ll x=a*(b+c);
    ll ans=max(s,max(t,max(u,max(v,max(w,x)))));
    cout<<ans<<endl;
    
return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main(){
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    //double s=(double(b)/m);
    
    if(b<a*m){
        ll ans=(n/m)*b+min((n%m)*a,b);
        cout<<ans<<endl;
    }
    else{
        cout<<n*a<<endl;
    }
    
return 0;
}
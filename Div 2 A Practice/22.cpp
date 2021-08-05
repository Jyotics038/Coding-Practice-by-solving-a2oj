#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main(){
    ll n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else {
        ll a=n/10;
        ll b=n/100*10 + n%10;
        cout<<max(a,b)<<endl;
}
    
return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	ll toast=(k*l)/nl;
	ll lime=c*d;
	ll salt=p/np;
	ll ans=(min(toast,min(lime,salt)))/n;
	cout<<ans<<endl;
	
	return 0;
}





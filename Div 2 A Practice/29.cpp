#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll n;
	cin>>n;
	ll a[n];
	ll counte=0,counto=0;
	ll lasteven=0;
	ll lastodd=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			counte++;
			lasteven=i;
		}
		else{
			counto++;
            lastodd=i;

		}
	}
	if(counto==1){
		cout<<lastodd<<endl;
	}
	else{
		cout<<lasteven<<endl;
	}
	
	return 0;
}
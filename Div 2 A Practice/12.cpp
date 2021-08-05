#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,m;
	cin>>n>>m;
	ll ans=min(n,m);
	if(ans%2!=0){
       cout<<"Akshat\n";
	}
	else{
		cout<<"Malvika\n";
	}
	return 0;
}
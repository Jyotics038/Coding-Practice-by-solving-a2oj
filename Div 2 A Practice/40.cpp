#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll n;
	cin>>n;
	ll a[n];
	ll sumc=0,sumb=0,sumbi=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i+=3){
		sumc+=a[i];
	}
	for(int i=1;i<n;i+=3){
		sumbi+=a[i];
	}
	for(int i=2;i<n;i+=3){
		sumb+=a[i];
	}
	ll ans=max(sumc,max(sumbi,sumb));
	if(ans==sumc){
		cout<<"chest\n";
	}
	else if(ans==sumbi){
		cout<<"biceps\n";
	}
	else{
		cout<<"back\n";
	}
	return 0;
}





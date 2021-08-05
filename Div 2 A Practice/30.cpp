#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		a[i]=5-a[i];
	}
	ll count=0;
	for(int i=0;i<n;i++){
		if(a[i]>=k){
			count++;
		}
	}
	cout<<count/3<<endl;

	
	return 0;
}
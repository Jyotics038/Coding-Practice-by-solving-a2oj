#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

	ll n,d;
	cin>>n>>d;
	ll a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	ll br=(n-1)*10;
	if(sum + br <= d){
        cout<<(d-sum)/5<<endl;
	}
	else{
		cout<<"-1\n";
	}

	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll n,m,x;
	cin>>n>>m;
	if(n<m){
		cout<<"-1\n";
	}
	else{
		if(n%2==0){
			x=n/2;
		}
		else{
			x=(n/2)+1;
		}
		while(x % m!=0){
			x++;
		}
		cout<<x<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	bool flag=0;
	int a[14]={4,7,44,47,74,77,444,777,447,474,744,477,774,747};
	for(int i=0;i<14;i++){
		if(n%a[i]==0){
			flag=1;
		}
	}
	if(flag){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}

}
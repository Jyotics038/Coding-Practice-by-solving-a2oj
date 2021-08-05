#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll b[n];
	int j=0;
	ll a;
	for(int i=1;i<=n;i++){
		cin>>a;
		b[a]=i;
	}
     
     for(int i=1;i<=n;i++){
     	cout<<b[i]<<" ";
     }

}
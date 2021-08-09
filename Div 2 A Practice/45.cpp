#include <bits/stdc++.h>
typedef long long ll;
#define int long long int;
using namespace std;

int32_t main(){
	ll n;
	cin>>n;
    ll x[n],y[n];
    int32_t count=0;
    for(int32_t i=0;i<n;i++){
    	cin>>x[i]>>y[i];
     }
      ll l,r,lo,up;
     for(int32_t i=0;i<n;i++){
     	l=0,r=0,lo=0,up=0;
     	for(int32_t j=0;j<n;j++){
            if(x[j]>x[i]&&y[j]==y[i])r++;
            if(x[j]<x[i]&&y[j]==y[i])l++;
            if(x[j]==x[i]&&y[j]<y[i])lo++;
            if(x[j]==x[i]&&y[j]>y[i])up++;
     	}
     
     
	if(l>=1&&up>=1&&lo>=1&&r>=1){
		count++;
	}
}
	cout<<count<<endl;
	return 0;
    }




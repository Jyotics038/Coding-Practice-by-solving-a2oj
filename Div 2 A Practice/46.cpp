#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int32_t main(){
	ll n,k;
	cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int rem=0;
    int count;
    int sum=0;
    for(int i=0;i<n;i++){
    	count=0;
    	while(a[i]!=0){
    	rem=a[i]%10;
    	if(rem==4||rem==7)count++;
    	a[i]=a[i]/10;
    	
    	}
      
      if(count<=k){
    	sum++;
    }

    }
    
    
    cout<<sum<<endl;
return 0;
}



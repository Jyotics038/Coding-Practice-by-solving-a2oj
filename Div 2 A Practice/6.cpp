#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	ll s=0;
	ll ans=0;
		for(int i=n-1;i>=0;i--){
			
				
				ans+=a[i];
				s++;
				if(ans>sum/2){
					break;
				}
		
		}
        
        

	
	cout<<s<<endl;


}
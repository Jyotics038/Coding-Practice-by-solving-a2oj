#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin>>n;
	ll h[n],a[n];

	ll count=0;
	
		for(int i=0;i<n;i++){
			cin>>h[i]>>a[i];
					}
		
		for(int i=0;i<n;i++){

			for(int j=0;j<i;j++){
				if(h[i]==a[j]){
					count++;
				}
				if(a[i]==h[j]){
					count++;
				}

			}

		}
		
		
	
	 cout<<count<<endl;
	return 0;
}
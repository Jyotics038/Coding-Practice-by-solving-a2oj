#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

	ll n;
	cin>>n;
	ll a[n];
	ll a1[5000],a2[5000],a3[5000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll count1=0,count2=0,count3=0;
	ll x=0,y=0,z=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			a1[x++]=i+1;
			count1++;
		}else if(a[i]==2){
			a2[y++]=i+1;
			count2++;
		}else{
			a3[z++]=i+1;
			count3++;

		}
	}
	ll mini=min(count1,min(count2,count3));
	cout<<mini<<endl;
     for(int i=0;i<mini;i++){
         cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i];
         cout<<endl;
     }

	return 0;
}
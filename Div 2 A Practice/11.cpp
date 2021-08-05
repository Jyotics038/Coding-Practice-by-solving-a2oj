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
	int min=1000;
	int mini=0;
	for(int i=0;i<n;i++){
        if(a[i]<=min){
        	min=a[i];
        	mini=i;
        }
     }
     int max=0;
     int maxi=0;
	for(int i=0;i<n;i++){
        if(a[i]>max){
        	max=a[i];
        	maxi=i;
        }
     }
     // if(a[0]==max||a[n-1]==min){
     // 	cout<<"0\n";
     // }
     if(maxi>mini){
     	cout<<(maxi-1)+(n-mini)-1;
     }
     else{
     	cout<<(maxi-1)+(n-mini);
     }
     
     
     

     
return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll n,count;
	cin>>n;
	char a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	bool even=true;
	for(int i=0;i<n;i++){
		count=0;
		for(int j=0;j<n;j++){
           if(i-1>=0&&a[i-1][j]=='o'){
           	count++;
           }
           if(i+1<n&&a[i+1][j]=='o'){
           	count++;
           }
           if(j+1<n&&a[i][j+1]=='o'){
           	count++;
           }
           if(j-1>=0&&a[i][j-1]=='o'){
           	count++;
           }
           if(count%2==1){
           	even = false;
           }
		}
	}
           if(even){
           	cout<<"YES\n";
           }
           else{
           	cout<<"NO\n";
           }
	

	
	return 0;
}
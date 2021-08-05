#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){

	ll m,n;
	cin>>m>>n;

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(i%2==1){
			cout<<"#";
		   }
		   else if(j==n&&i%4==2){
				cout<<"#";
			}
			else if(i%4==0&&j==1){
				cout<<"#";
			}
			else {
				cout<<".";
			}
		}
		cout<<"\n";
	}
	
	
	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	
	ll n;
	cin>>n;
	
	if(n%2==0){
		for(int i=1;i<=n;i+=2){
          			cout<<i+1<<" "<<i<<" ";
          		}
          		cout<<endl;

	}
	else{
		cout<<"-1\n";
	}
	return 0;
}


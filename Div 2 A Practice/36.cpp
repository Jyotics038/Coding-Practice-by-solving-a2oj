#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll n;
	cin>>n;
	ll a,b;
	bool flag=0;
	for(int i=0;i<n;i++){
         cin>>a>>b;
         if(a!=b){
         	flag=1;
         	break;
         }
	}
    if(!flag){
    	cout<<"Poor Alex\n";
    }
    else{
    	cout<<"Happy Alex\n";
    }
	
	return 0;
}





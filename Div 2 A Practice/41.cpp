#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	
	ll l,r;
	cin>>l>>r;
    if(r-l <2){
    	cout<<"-1\n";
    	return 0;
    }
    else if(l%2==1&&r-l>2){
    	cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
    	return 0;
    }
    else if(l%2==0){
    	cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    	return 0;
    }
    cout<<"-1\n";
	return 0;
}




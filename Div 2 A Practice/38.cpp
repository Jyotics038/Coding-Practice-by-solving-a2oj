#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll a,b;
	cin>>a>>b;
	ll counta=0,countb=0,draw=0;
	for(int i=1;i<=6;i++){
		if(abs(a-i)<abs(b-i)){
			counta++;
		}
		else if(abs(a-i)>abs(b-i)){
			countb++;
		}
		else{
			draw++;
		}
	}
	cout<<counta<<" "<<draw<<" "<<countb<<endl;
	
	return 0;
}





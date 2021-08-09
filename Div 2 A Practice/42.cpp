#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	
	ll n;
	cin>>n;
	string s;
	set<char>x,y;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<n;j++){
			
			if((i==j) || (i==n-j-1)){
               x.insert(s[j]);
			}else{
				y.insert(s[j]);
			}
		}
	}
	if(x.size()==1&&y.size()==1&&*x.begin()!=*y.begin()){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}



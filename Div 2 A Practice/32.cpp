#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll n,v,t;
	cin>>n>>v;
	std::vector<int> sellers;
	for(int i=1;i<=n;i++){
		ll k;
		cin>>k;
		bool f1=0;
		ll arr[51];
		for(int j=0;j<k;j++){
			cin>>t;
			if(t<v&&!f1){
				sellers.push_back(i);
				f1=true;
				
			}
		}
	}
		cout<<sellers.size()<<endl;
		for(int i=0;i<sellers.size();i++){
			cout<<sellers[i]<<" ";
		}

	

	
	return 0;
}
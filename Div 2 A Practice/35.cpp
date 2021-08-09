#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	
	ll n,k;
	cin>>n>>k;
	ll f,t;
	ll ans=-1000000000;
	ll joy;
	for(int i=0;i<n;i++){
      cin>>f>>t;
      if(t>k){
      	joy=f-(t-k);
      	
      }
      else{
      	joy=f;

      }
      
      ans=max(ans,joy);
	
}
      cout<<ans<<endl;
	

	
	return 0;
}





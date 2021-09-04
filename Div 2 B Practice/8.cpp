#include <bits/stdc++.h>
typedef long long ll;
#define int long long int

using namespace std;

ll ar[(ll)1e6+10];
set<ll> tprime;
void t_primes(){
  tprime.insert(4);
  for(int i=3;i<(int)1e6+1;i+=2){
    if(ar[i]==0){
      tprime.insert(i*i);
      for(int j=i;j<=1e6;j+=i){
        ar[j]=1;
      }
    }
  }
}

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   
   ll n;
   cin>>n;
   t_primes();
   for(ll i=0;i<n;i++){
    int x;
    cin>>x;
    if(tprime.find(x)!=tprime.end()){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
    
    }
   
   

   return 0;
}

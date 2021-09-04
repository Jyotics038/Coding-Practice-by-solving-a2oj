#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;



int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   ll n,l;
   cin>>n>>l;
   ll a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a,a+n);
   double x=a[0]-0;
   double y=l-a[n-1];
   double maxi=0;
   for(int i=0;i<n-1;i++){
     if(a[i+1]-a[i]>maxi){
      maxi=a[i+1]-a[i];
     }
   }
   double sol=double(maxi/2);
   double ans=max(sol,max(x,y));
   cout<<fixed<<setprecision(10)<<ans<<endl;
  
  return 0;
}
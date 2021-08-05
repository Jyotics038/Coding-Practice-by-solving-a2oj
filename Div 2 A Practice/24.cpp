#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main(){
    ll s,n;
    cin>>s>>n;
    pair<int,int>a[1000];
    for(int i=0;i<n;i++){
      cin>>a[i].first>>a[i].second;
    }

      sort(a,a+n);
      for(int i=0;i<n;i++){
      if(s>a[i].first){
         s=s+a[i].second;
      }
      else{
         cout<<"NO\n";
         return 0;
      }
    }
      cout<<"YES\n";
return 0;
}
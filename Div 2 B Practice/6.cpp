#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;



int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   ll n;
   cin>>n;
   ll a[n+10];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int st=-1;
   int en=n;
   bool flag=true;
   for(int i=1;i<n;i++){
    if(flag){
      if(a[i]<a[i-1]){
        flag=false;
        st=i-1;
      }
    }
    else{
      if(a[i]>a[i-1]){
        en=i;
        break;
      }
    }
   }
   if(st!=-1){
    reverse(a+st,a+en);
    for(int i=1;i<n;i++){
      if(a[i]<a[i-1]){
        flag=false;
        break;
      }else{
        flag=true;
      }
    }
   }
   if(flag){
    cout<<"yes\n";
    if(st==-1){
      cout<<"1 1\n";
    }else{
      cout<<st+1<<" "<<en<<"\n";
    }
   }
   else{
    cout<<"no\n";
   }
  
   return 0;
}

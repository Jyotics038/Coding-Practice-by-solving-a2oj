#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;



int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   ll n,t;
   cin>>n>>t;
   char s[n];
   for(int i=0;i<n;i++){
    cin>>s[i];
   }
   while(t--){
    for(int i=0;i<n;i++){
      if(s[i]=='B'&&s[i+1]=='G'){
        s[i]='G';
        s[i+1]='B';
        i++;
      }
    }
   }
   for(int i=0;i<n;i++){
    cout<<s[i];
   }

   
  return 0;
}


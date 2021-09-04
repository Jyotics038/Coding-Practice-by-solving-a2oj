#include <bits/stdc++.h>
typedef long long ll;
#define int long long int

using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   
   string s;
   cin>>s;
   int ind=-1;
   for(int i=0;i<s.length();i++){
    if(s[i]%2==0){
      ind=i;
      if(s[s.length()-1] >s[i])
        break;
    }
   }
   if(ind==-1){
    cout<<"-1\n";
    }
    else{
      swap(s[s.length()-1],s[ind]);
      cout<<s<<endl;
    }
   

   return 0;
   
}


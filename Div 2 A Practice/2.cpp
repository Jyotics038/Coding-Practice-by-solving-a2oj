#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
         ll n=str.length();
        
         if(n>10){
            
                cout<<str.at(0)<<(n-2)<<str.at(n-1)<<endl;
          

         }
        else{
            cout<<str<<endl;
        }
    
    }
return 0;
}
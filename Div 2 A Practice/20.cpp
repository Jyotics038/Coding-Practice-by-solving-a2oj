#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main(){
    ll n,k;
    cin>>n>>k;
    
    ll s=ceil(ceil(n)/2);
    if(k<=s){

        cout<<k+(k-1)<<endl;
    }
    else{
        if(n%2==0){
            cout<<(k-(n-k))<<endl;

        }
        else{

            cout<<(k-(n+1-k))<<endl;
        }
    }
    
return 0;
}
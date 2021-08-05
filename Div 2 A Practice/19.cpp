#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main(){
    ll n;
    cin>>n;
    ll p;
    cin>>p;
    set <int> a;
    while(p--){
        ll b;
        cin>>b;
        a.insert(b);
    }
    ll q;
    cin>>q;
    while(q--){
        ll c;
        cin>>c;
        a.insert(c);
    }
    if(a.size()==n){
        cout<<"I become the guy.\n";
    }
    else{
        cout<<"Oh, my keyboard!\n";
    }

    
return 0;
}
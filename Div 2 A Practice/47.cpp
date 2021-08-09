#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int32_t main(){
	int a,b,c,d;
  cin>>a>>b>>c>>d;
  int mp=max((3*a)/10,a-((a*c)/250));
  int vp=max((3*b)/10,b-((b*d)/250));
  if(mp>vp){
    cout<<"Misha\n";
  }
  else if(mp<vp){
    cout<<"Vasya\n";
  }else{
    cout<<"Tie\n";
  }
}



//Amr and Pins
#include <bits/stdc++.h>
typedef long long ll;
#define int long long int

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll r,x2,y2,x1,y1;
  cin>>r>>x1>>y1>>x2>>y2;
  int dist=ceil(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/(2.000*r));
  cout<<dist<<endl;
  return 0;
}

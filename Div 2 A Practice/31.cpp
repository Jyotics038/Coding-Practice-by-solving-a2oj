#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int32_t main(){
  ll r,c;
  cin>>r>>c;
  ll row[11]={0},col[11]={0};
  string s;
  for(int i=0;i<r;i++){
    cin>>s;
    for(int j=0;j<c;j++){
      if(s[j]=='S'){
        row[i]=1;
        col[j]=1;
      }
    }
  }
  int cake=0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(row[i]==0||col[j]==0){
        cake++;
      }
    }

  }
  cout<<cake<<endl;

  return 0;
}





 
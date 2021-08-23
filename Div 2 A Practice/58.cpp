#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n,m;
  cin>>n>>m;
  char a[n][m];
  for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
                cin>>a[i][j];
         }
  }
  for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
                if((i+j)%2==0&&a[i][j]=='.'){
                       a[i][j]='B';
                }else if(a[i][j]=='-'){
                       a[i][j]='-';
                }else{
                       a[i][j]='W';
                }
         }
  }
  for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
                cout<<a[i][j];
         }
         cout<<endl;
  }
 
  
  return 0;
}

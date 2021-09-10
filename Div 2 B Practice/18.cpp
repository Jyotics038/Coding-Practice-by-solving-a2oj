//OR in Matrix
#include <bits/stdc++.h>
typedef long long ll;
#define int long long int
using namespace std;

void solve(){
  ll n,m;
  cin>>m>>n;
  int mat[m][n];
  int ans[m][n];
  int tran[m][n];
  for (int i = 0; i < m; i++)
  {
    for(int j=0;j<n;j++){
      cin>>mat[i][j];
      ans[i][j]=1;
      tran[i][j]=0;
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(mat[i][j]==0){
        for(int k=0;k<n;k++){
          ans[i][k]=0;
        }
        for(int k=0;k<m;k++){
          ans[k][j]=0;
        }
      }
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        tran[i][j]=max(tran[i][j],ans[i][k]);
      }
      for(int k=0;k<m;k++){
        tran[i][j]=max(tran[i][j],ans[k][j]);
      }
     if(tran[i][j]!=mat[i][j]){
        cout<<"NO\n";
        return;
      
      }

    }
  }
  cout<<"YES\n";
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   
   ll t=1;
   // cin>>t;
   while(t--){
    solve();
   }
   return 0;
 }


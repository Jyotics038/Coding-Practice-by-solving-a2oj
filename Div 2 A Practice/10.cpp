#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	
	int x;
     for(int i=1;i<=5;i++){
     	for(int j=1;j<=5;j++){
     		cin>>x;
     		if(x==1){
     			cout<<abs(3-i)+abs(3-j)<<endl;
     		}
     	}
     }
     
return 0;
}
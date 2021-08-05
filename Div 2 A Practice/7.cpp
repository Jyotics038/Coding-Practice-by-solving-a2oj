#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	string s;
	cin>>s;
	string t="hello";
	int count=0,j=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==t[j]){
            j++;
            count++;
		}
		if(count==5){
			break;
		}
	}
	if(count==5){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}

}
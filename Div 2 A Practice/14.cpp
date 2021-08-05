#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin>>s;
	bool flag=1;
	//string s1="WUB";
	for(int i=0;i<s.length();i++){
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
			i+=2;
			if(!flag){
				cout<<" ";
			}
			continue;
		}else{
			flag=0;
			cout<<s[i];
		}

	}

	return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
    	if(s1[i]>='A'&&s1[i]<='Z')
    		s1[i]=(char)(97+(int)(s1[i]-'A'));
    }
    for(int i=0;i<s2.length();i++){
    	if(s2[i]>='A'&&s2[i]<='Z')
    		s2[i]=(char)(97+(int)(s2[i]-'A'));
    }
	int res=s1.compare(s2);

	if(res==0){
		cout<<"0\n";
	}
	else if(res<0){
         cout<<"-1\n";
	}
	else{
		cout<<"1\n";
	}
	


}
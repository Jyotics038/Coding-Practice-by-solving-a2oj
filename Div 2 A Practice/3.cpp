#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin>>s;
    //tolower(s);
    char a='.';
    string temp="";
    
       for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z')
            s[i]=(char)(97+(int)(s[i]-'A'));
       }
       for(int i=0;i<s.length();i++){
        
        if(s[i]!='a'&&s[i]!='o'&&s[i]!='y'&&s[i]!='e'&&s[i]!='u'&&s[i]!='i'){
            temp=temp+'.'+s[i];
        }
       }
       
        
         cout<<temp<<endl;
return 0;
}
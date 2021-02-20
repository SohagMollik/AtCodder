#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool ok=true;
    for(int i=0;i<s.size();i+=2){
        if(s[i]>='A'&&s[i]<='Z')ok=false;
    }
    bool ans=true;
    for(int i=0;i<s.size();i+=2){
        if(s[i+1]>='a'&&s[i+1]<='z')ans=false;
    }
    if(ok==true&&ans==true)cout<<"Yes\n";
    else cout<<"No\n";
}

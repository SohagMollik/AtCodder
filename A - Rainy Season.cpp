#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]=='R'&&s[1]=='R'&&s[2]=='R')cout<<3<<endl;
    else if(s[0]=='R'&&s[1]=='R'&&s[2]!='R')cout<<2<<endl;
    else if(s[0]=='R'&&s[1]!='R'&&s[2]!='R')cout<<1<<endl;
    else if(s[0]=='R'&&s[1]!='R'&&s[2]=='R')cout<<1<<endl;
    else if(s[0]!='R'&&s[1]=='R'&&s[2]=='R')cout<<2<<endl;
    else if(s[0]!='R'&&s[1]=='R'&&s[2]!='R')cout<<1<<endl;
    else if(s[0]!='R'&&s[1]!='R'&&s[2]!='R')cout<<0<<endl;
   else if(s[0]!='R'&&s[1]!='R'&&s[2]=='R')cout<<1<<endl;
}


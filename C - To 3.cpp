#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   string s;
   cin>>s;
   ll sum=0,sub;
   for(int i=0;i<s.length();i++){
    sum+=s[i]-'0';
   }
   if(sum%3==0)
   cout<<0;
   else{
    for(int i=s.length()-1;i>0;i--){
        sub=(s-'0')-(s[i]-'0');
    }
   }
}

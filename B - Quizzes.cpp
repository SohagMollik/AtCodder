#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    ll c=0,d=0;
         for(int i=0;i<a;i++){
            if(s[i]=='x')c++;
            else d++;
         }
         if(((b-c)+d)<0)cout<<0<<endl;
         else
            cout<<((b-c)+d)<<endl;

}


#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string t,ans={};
    cin>>t;
    for(int i=0;i<t.size();i++){
        if((t[i]-'0')==1)ans=ans+s1;
        else if((t[i]-'0')==2)ans=ans+s2;
        else if((t[i]-'0')==3)ans=ans+s3;
    }
    cout<<ans<<endl;
    return 0;
}

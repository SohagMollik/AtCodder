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
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<string>s;
    int ans=0,x=0,y=0,z=0;
    if(s1!="H" && s1!="2B" && s1!="3B"&&s1!="HR")ans=1;
    if(s2!="H" && s2!="2B" && s2!="3B"&&s2!="HR")x=1;
    if(s3!="H" &&s3!="2B" && s3!="3B"&&s3!="HR")y=1;
    if(s4!="H" && s4!="2B'"&& s4!="3B"&&s4!="HR")z=1;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    if((ans==1||x==1||y==1||z==1) ||(s.size()!=4))cout<<"No\n";
    else cout<<"Yes\n";

    return 0;
}

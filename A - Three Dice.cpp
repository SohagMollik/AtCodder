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
//    fast;
//     int x,y,z;
//     cin>>x>>y>>z;
//     cout<<21-(x+y+z)<<endl;

int a,b,k;
cin>>a>>b>>k;
if(k>a+b){
    for(int x=0;x<b;x++){
        cout<<"b";
    }
    for(int x=0;x<a;x++){
        cout<<"a";
    }
    cout<<endl;
}
    return 0;
}

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
    int a,b;
    cin>>a>>b;
    if(a==b)cout<<1<<endl;
    else{
        int x=a-b;
        ll ans=1;
        for(int i=1;i<=x;i++){
            ans*=32;
        }
        cout<<ans<<endl;
    }


    return 0;
}

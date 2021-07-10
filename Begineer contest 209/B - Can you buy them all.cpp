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
    int n,x;
    cin>>n>>x;
    int  a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int j,k,sum1=0,sum2=0,ans;
    for(j=1;j<=n;j+=2){
        sum1+=a[j];
    }
    for(k=2;k<=n;k+=2){
        int z=a[k]-1;
        sum2+=z;
    }
    ans=sum1+sum2;
    if(x>=ans)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}

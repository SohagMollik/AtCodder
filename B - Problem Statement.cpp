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
    int n;
    cin>>n;
    int a[n];
    int ans=n*(n+1)/2;
    set<int>s;
    set<int>:: iterator i;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    int sum=0;
    for(i=s.begin();i!=s.end();i++){
        sum+=*i;
    }
    //cout<<sum<<endl;
    if(sum>ans||sum<ans)cout<<"No\n";
    else cout<<"Yes\n";
    return 0;
}

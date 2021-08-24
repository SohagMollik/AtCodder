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
    int n,m;
    cin>>n>>m;
    int a[n];
    vector<int>v,vec,v1;
    v.pb(1);
    bool ok=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0)ok=true;
        else vec.pb(a[i]);
    }
  if(m%2==0 && ok==true){
        int tmp=0;
      for(int i=1;i<m;i+=2){
        int x=0;
        for(int j=0;j<vec.size();j++){
            int mn=min(i,vec[j]);
            int mx=max(i,vec[j]);
            if(__gcd(mn,mx)==1){
                x++;
            }
        }
      if(x==n){
         tmp++;
         v1.pb(i);
     }

      }
     cout<<tmp<<endl;
    sort(v1.begin(),v1.end());
    for(auto &zx: v1)
        cout<<zx<<endl;
  }
  else{
    int ans=1;
    for(int i=2;i<=m;i++){
            int x=0;
        for(int j=0;j<n;j++){
                int mn=min(i,a[j]);
                int mx=max(i,a[j]);
            if(__gcd(mn,mx)==1){
                x++;
            }
        }
        if(x==n){
            ans++;
            v.pb(i);
        }
    }
    cout<<ans<<endl;
    sort(v.begin(),v.end());
    for(auto &z: v)
        cout<<z<<endl;
  }
    return 0;
}

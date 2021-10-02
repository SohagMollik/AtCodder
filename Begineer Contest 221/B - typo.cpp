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
    string x,y;
    cin>>x>>y;
    if(x==y)
        cout<<"Yes\n";
   else{
     for(int i=0;i<x.length();i++){
        if(x[i]!=y[i]){
            swap(x[i],x[i+1]);
            break;
        }
     }
     if(x==y)cout<<"Yes\n";
     else cout<<"No\n";
   }
    return 0;
}

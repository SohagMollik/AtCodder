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
    ll n;
    cin>>n;
   ll k=0;
   while(n!=1){
     n/=2;
     k++;
   }
   cout<<k<<endl;

    return 0;
}

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
    int a,b;
    cin>>a>>b;
    int i=0,ans;
    while(1){
       ans=a^i;
        if(ans==b){
            cout<<i<<endl;
            break;
        }
      i++;
    }

    return 0;
}

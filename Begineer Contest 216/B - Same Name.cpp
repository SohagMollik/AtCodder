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
    string S[1005];
    string T[1005];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>S[i]>>T[i];
    }
    string ans="No";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(S[i]==S[j] && T[i]==T[j])
                ans="Yes";
        }
    }
   cout<<ans<<endl;

    return 0;
}

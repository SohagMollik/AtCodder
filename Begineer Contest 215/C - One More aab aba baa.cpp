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
    string s;
    int k;
    cin>>s>>k;
    sort(s.begin(),s.end());
    for(int i=0;i<k-1;i++)next_permutation(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}

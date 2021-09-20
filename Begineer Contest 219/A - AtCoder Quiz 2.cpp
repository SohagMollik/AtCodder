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
    int x;
    cin>>x;
    if(x>=0&&x<40)cout<<40-x<<endl;
    else if(x>=40&&x<70)cout<<70-x<<endl;
    else if(x>=70&&x<90)cout<<90-x<<endl;
    else if(x>=90)cout<<"expert\n";
    return 0;
}

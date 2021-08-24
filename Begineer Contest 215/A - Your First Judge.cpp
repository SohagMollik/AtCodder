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
    cin>>s;
    int len=s.size();
    regex r("H.*e.*l.*l.*o.*,.*W.*o.*r.*l.*d.*!");
    if(regex_match(s,r)&&len==12)cout<<"AC\n";
    else cout<<"WA\n";

    return 0;
}

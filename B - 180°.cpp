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
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int len=s.length();
    for(int i=0;i<len;i++){
       if(s[i]=='6')
       {
           s[i]='9';
       }
       else if(s[i]=='9')
       {
           s[i]='6';
       }
       else{
        s[i]=s[i];
       }
    }
    cout<<s<<endl;

    return 0;
}

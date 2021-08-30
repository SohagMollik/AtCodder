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
    int y=s[s.size()-1]-'0';
    if(y>=0&&y<=2){
            int i=0;
        while(s[i]!='.'){
            cout<<s[i];
           i++;
        }
        cout<<"-\n";
    }
    else if(y>=3&&y<=6){
         int i=0;
        while(s[i]!='.'){
            cout<<s[i];
           i++;
        }
    }
    else {
         int i=0;
        while(s[i]!='.'){
            cout<<s[i];
           i++;
        }
        cout<<"+\n";
    }

    return 0;
}

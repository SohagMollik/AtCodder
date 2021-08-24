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
vector<string>v;
void permute(string s , string answer)
{
    if(s.length() == 0)
    {
        //v.pb(answer);
       cout<<answer<<"  ";
        return;
    }
    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0,i);
        string right_substr = s.substr(i+1);
        string rest = left_substr + right_substr;
        permute(rest , answer+ch);
    }

}
int main()
{
    fast;
    string s;
    int n;
    string answer=" ";
    cin>>s>>n;
    permute(s , answer);
//    for(auto x: v){
//        cout<<x<<" ";
//    }
//    cout<<endl;
    return 0;
}

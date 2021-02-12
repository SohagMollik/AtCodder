#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    string s;
    while(n--){
        cin>>s;
        m[s]++;
    }
    cout<<m[s]+1<<endl;
}

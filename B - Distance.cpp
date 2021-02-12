#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,c=0;
    cin>>n>>d;
    while(n--){
        int x,y;
        cin>>x>>y;
        int ans=round(sqrt((x*x)+(y*y)));
        if(ans==d)c++;

    }
    cout<<c<<endl;
}

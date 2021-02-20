#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<100)cout<<100-x<<endl;
    else{
        if(x%100==0)cout<<100<<endl;
        else {
            int y=x%100;
            cout<<100-y<<endl;
        }
    }
}

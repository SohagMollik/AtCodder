#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=1;
    cin>>n>>x;
    bool bal=true;
    double sum=0.00000,result;
    double y=double(x);
    while(n--){
        int v,p;
        cin>>v>>p;
        result=(double)((((double)v*(double)p)/100.0));
         sum+=result;
        if(sum>y){
            bal=false;
        }
        else{
            c++;
        }
    }
    if(bal==false)cout<<c<<endl;
    else cout<<-1<<endl;
}

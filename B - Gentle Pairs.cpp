#include<bits/stdc++.h>
using namespace std;
vector<double>v;
int main()
{
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    //int b[2*n];
    double x;
    for(int i=0;i<2*n;i+=2){
        for(int j=i+2;j<2*n;j+=2){
          x=(double)((a[j+1]-a[i+1])/(a[j]-a[i]));
          v.push_back(x);
        }
    }
    //int l=sizeof(b)/sizeof(b[0]);
    //cout<<v.size()<<endl;
    sort(v.begin(),v.end(),greater<double>());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

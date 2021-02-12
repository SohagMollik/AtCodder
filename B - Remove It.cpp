#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
  int n,x;
  cin>>n>>x;
  int a[n],b[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }


  for(int i=0;i<=n-1;i++){
    if(a[i]!=x){
        int z=a[i];
        v.push_back(z);
    }

  }

  for(int j=0;j<v.size();j++)
  {

        cout<<v[j]<<" ";
  }
  cout<<endl;
}

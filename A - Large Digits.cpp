#include<bits/stdc++.h>
using namespace std;
int Large_digit(int a,int b){
    int sum1=0,sum2=0;
   while(a!=0){
    int r=a%10;
    sum1+=r;
    a/=10;
   }
   while(b!=0){
    int p=b%10;
    sum2+=p;
    b/=10;
   }
   return max(sum1,sum2);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<Large_digit(a,b)<<endl;
}

#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    double ans=(a*b)/100;
    cout<<setprecision(6)<<fixed<<ans<<endl;
    return 0;
}



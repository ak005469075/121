#include<iostream>
using namespace std;
double myfabs(double a)
{ 
    double s=0;
    s=a>0?a:-a;
    return s;
}
int main()
{
    double x;
    cin>>x;
    cout<<myfabs(x)<<endl;
  return 0;
}
#include<iostream>
using namespace std;
double mysum(double a,double b)
{
    double s=0;
    s=a+b;
    return s;
}
int main(){
       double x,y,q;
       cin>>x>>y;
       q=mysum(x,y);
       cout<<q<<endl;
       return 0;

}
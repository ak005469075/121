#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double A,B,C,x,y,z,d;
    cin>>A>>B>>C;
    cin>>x>>y;
    z=A*x+B*y+C;
    d=(z<0?-z:z);
    cout<<int(d/sqrt(A*A+B*B)*100+0.5)/100.00;
    return 0;
}
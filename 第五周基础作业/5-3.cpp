#include<iostream>
using namespace std;
double mypow(double a,int b)
{
    int i;
    double s=1;
    if(a==0)
    return 0;
    if(b>=0){
         
    for(i=1;i<=b;i++)
        s*=a;
    }
   
    else if(b<0)
    for(i=1;i<=-b;i++)
       s*=1.0/(a);
     return s;  
}
int main()
{
    double x;
    int k;
    cin>>x>>k;
    cout<<mypow(x,k)<<endl;
    return 0;
}
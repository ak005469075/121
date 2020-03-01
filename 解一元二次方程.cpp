//输入一元二次方程的a,b,c三个系数，解一元二次方程ax^3+bx+c=0;输出两个根（含复根)
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   double a,b,c;
   double delta;//根的判别式
   double x,x1,x2;
   cout<<"请输入一元二次方程的三个系数a,b,c";
   cin>>a>>b>>c;
   if(a==0)
  {
       if(b==0){cout<<"所输入系数不构成方程"<<endl;}
       else
       {//二次项系数等于0，一次项系数不等于0
       x=-c/b;//计算单根
       cout<<"实际为一元一次方程，根为:"<<x<<endl;     
       }   
  }
    else{//二次项系数不为0
    delta=b*b-4.0*a*c;
    if(delta>=0){
        delta=sqrt(delta);
        x1=(-b+delta)/2.0/a;//根1
        x2=(-b-delta)/2.0/a;//根2
        cout<<"方程有实根，它们是:"<<endl;
        cout<<x1<<" "<<x2<<endl;
                 }
        }    
        return 0;
}
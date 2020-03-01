//编写程序，能够根据输入的实数x和n,计算X的n次方根。
//具体要求:输入0 0 时，程序结束
//当(x<0且n<=0)或(x<=0且1/n不为整数)时，显示"输入错误"并允许用户继续输入
//否则计算并显示x的n次方根并允许用户继续输入
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,n;
    while(1)
    {
        cin>>x>>n;
        if(x==0&&n==0)
        {cout<<"Program terminationed"<<endl; break;}
        else
         if((x<0&&n<=0)||(x<0&&1/n!=int(1/n)))
        {cout<<"error reinput"<<endl;     continue;}
        cout<<x<<"\t"<<n<<"th root"<<pow(x,1.0/n)<<endl;       
    }
    
        return 0;
}
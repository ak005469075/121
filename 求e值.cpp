//编写程序，使用下列级数近似计算e值，直到最后一个通项<10^-7为止。
#include<iostream>
using namespace std;
int main()
{
       double e=1.0,u=1.0;
       int n=1;
       while(u>=1.0E-7)
       {
           u=u/n;
           e=e+u;
           n=n+1;
       }
       cout<<"e="<<e<<"(n="<<n<<")"<<endl;
        return 0;
}
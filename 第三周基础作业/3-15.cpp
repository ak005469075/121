//基础作业15 九九乘法口诀表倒
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cin>>j;
    for(i=j;i>=1;i--)
    {
        for(k=1;k<=i;k++)
        {
            if(i==k)
            {
                cout<<i<<"*"<<k<<"="<<k*i;//除去末尾空格
            }
            else
            {
                cout<<i<<"*"<<k<<"="<<k*i<<" ";
            } 
        }
          cout<<endl;
    }
    return 0;
}
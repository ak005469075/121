//基础作业14 九九乘法口诀表
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    cin>>j;
    for(i=1;i<=j;i++)
    {   
        for(k=1;k<=i;k++)
        {
            if(k==i)
            {
                cout<<i<<"*"<<k<<"="<<k*i;
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
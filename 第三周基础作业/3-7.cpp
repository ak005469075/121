//基础作业6,显示字符组成的矩形
#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    char c;
    cin>>a>>b>>c;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
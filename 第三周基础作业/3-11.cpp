//基础作业11
#include<iostream>
using namespace std;
int main()
{
     int j,a=1,n;//1
       cin>>n;
       j=0;
       cout<<a;
       j++;
       while(j<n)
        {
            if(j%2==0)
        {cout<<" "<<a;}
        else
        {
            cout<<" "<<-a;
        }
        
           j++;
        }
           cout<<endl;   //2    1与2之间的操作使得输出末尾无空格；
         
         return 0;
    }    
   /* int k=1,i=1,j,n,a;
    cin>>n;
    for(;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<-k<<" ";
        }
        else
        {
            cout<<k<<" ";
        }
    return 0;*/

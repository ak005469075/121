//编写函数判断一个整数是否为素数  此答案由百度提供
#include<iostream>
using namespace std;
int isprime(int a)
{
   if(a==1)
    return 1;
   for(int i=2;i<a;i++){
       if(a%i==0)
       {
           return 1;
           break;
       }
   }
  return 0;
}
int main()
{
    int k=0,x=0,q=0;
      int s[100]={0};
      int *p=s;
    int a[100];
    int i=0;
    for(i=0;i<100;i++)
    {  
       
         cin>>a[i];
        
        if(a[i]==0)
           {
               q=i;
               break;
           }
        k=isprime(a[i]);
        if(k==0)
        {
            *p=a[i];
            *p++;
            x++;     
        }
    }
    for(int i=0;i<x;i++){
        if(i==x-1)
        cout<<s[i];
        else
        {
            cout<<s[i]<<' ';
        }    
    }
    return 0;
}
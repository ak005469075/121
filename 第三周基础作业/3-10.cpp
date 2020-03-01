//»ù´¡×÷Òµ10
#include<iostream>
//#include<cmath>
using namespace std;
int main()
{
  int n,i=1,s=1;
    char a='1';
    cin>>n;
    if(n==0)
    cout<<a<<endl;
    else
    {
         /*  while(i<=n)
       {
        s=s*i;
        i++;
      }
    }
   */
    for(;i<=n;i++)
    {
        s=s*i;
    }
     cout<<s<<endl;
    }
    return 0;
}
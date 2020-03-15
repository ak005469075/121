#include<iostream>
using namespace std;
int sum(int a[100])
{
  int i=0,j=0,k=0,s=0;
  for(i=0;;i++)
  {
      cin>>a[i];
      if(a[i]==-9999)
       {
        j=i;
       break;
       }
  }
  for(k=0;k<=j-1;k++)
   s=s+a[k];
   return s;
 
}
int main()
{
   
     int c[100];
     cout<<sum(c)<<endl;
return 0;
}
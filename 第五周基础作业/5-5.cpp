#include<iostream>
using namespace std;
void nixu(int a[100])
{
  int i=0,j=0,k=0;
  for(i=0;;i++)
  {
      if(a[i]==-9999)
       {
        j=i;
       break;
       }
  }
  for(k=j-1;k>=0;k--)
  if(k==0)
     cout<<a[k];
     else cout<<a[k]<<" ";
}
int main()
{
   
     int c[100];
    int i=0;
 for(i=0;;i++)
   {
     cin>>c[i];
    if(c[i]==-9999)
     break;
   }
     nixu(c);
return 0;
}
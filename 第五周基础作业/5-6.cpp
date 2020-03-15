#include<iostream>
using namespace std;
void shuchu(int s[])
{
    int i=0,j=0,k=0;
    for(;;i++)
    {
        if(s[i]==-9999)
         {
             j=i;
             break;
         }
    }
    for(k=0;k<=j-1;k++)
    if(k==j-1)
    cout<<s[k];
    else cout<<s[k]<<" ";
}
int main()
{
    int a[100];
    int i=0;
    for(;;i++)
    {
        cin>>a[i];
        if(a[i]==-9999)
        break;
    }
         shuchu(a);
         return 0;
}
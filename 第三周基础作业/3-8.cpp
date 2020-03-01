//基础作业8
#include<iostream>
using namespace std;
int main()
/*{
  int n,i,sum=0;
  cin>>n;
  for(i=1;i<=n;i++)
  {
      sum=sum+i;
  }
  cout<<sum<<endl;
  return 0;
}*/
{
    int n,i=1,sum=0;
    cin>>n;
    while(i<=n)
    {
       sum=sum+i;
       i++;
    }
    cout<<sum<<endl;
    return 0;
}
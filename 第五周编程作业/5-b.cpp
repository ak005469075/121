#include<iostream>
using namespace std;
int imax(int array[],int count)
{
    int max=array[0];
    for(int i=0;i<count;i++)
        {
            if(max<=array[i])
            max=array[i];
        }
        return max;
}
int imin(int array[],int count)
{
    int min=array[0];
    for(int i=0;i<count;i++)
        {
            if(min>=array[i])
            min=array[i];
        }
        return min;
}
int main()
{
    int array[100];
    int count;
    cin>>count;
    for(int i=0;i<count;i++)
     cin>>array[i];
     cout<<imax(array,count)<<endl;
     cout<<imin(array,count)<<endl;
return 0;
}


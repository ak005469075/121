#include<iostream>
using namespace std;
void mystrrev(char str[])
{
    int j=0;
    cin.getline(str,100);
    for(int i=0;;i++)
    {
        if(str[i]=='\0')
        {
           j=i;
           break;
        }
    }
    for(int k=j-1;k>=0;k--)
    cout<<str[k];
}
int main()
{
    char str[100];
    mystrrev(str);
    return 0;
}
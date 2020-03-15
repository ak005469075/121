//编写函数去除字符串中包含的非字母字符(不包括空格)，并将小写字母转换成大写字母
#include <iostream>
using namespace std;
void s(char a[])
{
    int count=0;
    int i=0;
    for(i=0;;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i-count]=a[i]-32;
        }
        else if((a[i]>='A'&&a[i]<='Z')||a[i]==' ')
        {
            a[i-count]=a[i];
        }
        else
        {
            count++;
        }
        if(a[i]=='\0')
        {
            break;
        }
    }
    for(int j=0;j<i-1;j++)
    {
        a[i-count+1]='\0';
    }
}
int main()
{
    char a[200];
    cin.getline(a,200);
    s(a);
    cout<<a<<endl;
    return 0;
}
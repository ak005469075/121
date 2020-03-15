#include<iostream>
using namespace std;
void daxie(char s[200])
{
    int i=0;
    char a[200]={0};
    cin>>s;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
           a[i]='A'+(s[i]-'a')%26;         
      else a[i]=s[i];
    }
    for(i=0;a[i]!='\0';i++)
     cout<<a[i];
}
int main()
{
    char s[200];
    daxie(s);
}
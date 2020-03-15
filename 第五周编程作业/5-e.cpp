#include<iostream>
using namespace std;
void zishu(char s[])
{
    int i,j=0,others=0;
    cin.getline(s,500);
    for(i=0;;++i)
    if(s[i]=='\0')
    {
      j=i;
      break;
    }
    for(i=0;i<j;i++){
      if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                  { 
                    others++;
       while ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))                   
                     i++;
                  }
                  else i++;
    }
           cout<<others<<endl;
}
int main()
{
  char s[500];
  zishu(s);
  return 0;
}
#include<iostream>
using namespace std;
void mystrcpy(char s1[],char s2[]){
    for(int i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
        cout<<s2[i];
    }
}
int main()
{
    char s1[100];
  char s2[100];
    cin.getline(s1,100);
  mystrcpy(s1,s2);
 return 0;
}
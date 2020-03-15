#include<iostream>
using namespace std;
void bijiao(char s1[],char s2[])
{
    int p=0,q=0;
    cin>>s1>>s2;
    for(int i=0;;i++){
        if(s1[i]=='\0')
           {
              p=i; break;//统计s1字数
           }
                      }
     for(int j=0;;j++){
        if(s2[j]=='\0')
           {
              q=j; break;//统计s2字数
           }
                      }
        int min=p;
          if(min>=q)
             min=q;//取最短字符串的字数;
     for(int k=0;k<=q;k++){
        
 {
        if(s1[k]>s2[k]){
            cout<<"1"; break;
        }
          
          if(s1[k]<s2[k]){
              cout<<"-1"; break;
          }
         
          if(s1[k]==s2[k]&&p==q){
              cout<<"0"; break;
          }
 } 
                        }
}
int main()
{
    char s1[200],s2[200];
    bijiao(s1,s2);
}
//基础作业2
#include<iostream>
using namespace std;
int main()
{
     double n;
     cin>>n;
                if(n==0){cout<<"zero"<<endl;}
                if(int(n)==n&&n!=0)
        {
               if(n>0){cout<<"positive integer"<<endl;} 
         else
              {
               cout<<"negative integer"<<endl;
              }
          } 
        else if(n!=0)
        {
              if(n>0){cout<<"positive real"<<endl;} 
         else
              {
               cout<<"negative real"<<endl;
              }
         
        }
      
            
        return 0;
}
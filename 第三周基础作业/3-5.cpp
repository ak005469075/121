//基础作业5
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n/10==10||n/10==9)
      cout<<"5"<<endl;
      else
      {
          if(n/10==8)
          cout<<"4"<<endl;
          else
          {
              if(n/10==7)
              cout<<"3"<<endl;
              else
              {
                  if(n/10==6)
                  cout<<"2"<<endl;
                  else
                  {
                      if(n>=10&&n<=59)
                      cout<<"1"<<endl;
                      else
                      {
                          cout<<"0"<<endl;
                      }
                      
                  }
                  
              }
              
          }
          
      }
     return 0; 
}
/*{
    int n;
    cin>>n;
    switch(n/10)
    {
    case 10:
    case 9: cout<<"5"<<endl; break;
    case 8: cout<<"4"<<endl;break;
    case 7: cout<<"3"<<endl; break;
    case 6: cout<<"2"<<endl;break;
    case 5: 
    case 4:
    case 3:
    case 2:
    case 1:
    cout<<"1"<<endl;break;
    default: cout<<"0"<<endl;
    }
    return 0;
}*/
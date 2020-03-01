//实现简单的加减乘除表达式的计算
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double num1,num2;//两个实数
    char op;//一个运算符
    double result;
    char caption1[20]="Error,Divided by 0!";//分母为0
    char caption2[20]="Invalid operator!";//非法运算符
    cout<<"输入表达式:";
    cin>>num1>>op>>num2;
    switch (op)
    {
    case '+': result=num1+num2;
            cout<<num1<<op<<num2<<"="<<result<<endl; 
            break;
    case '-': result=num1-num2;
            cout<<num1<<op<<num2<<"="<<result<<endl;
            break;
     case '*': result=num1*num2;
            cout<<num1<<op<<num2<<"="<<result<<endl;
            break;
      case '/': 
        if(fabs(num2)<1.0e-8)//除数为0   fabs()指绝对值
           {
               cout<<caption1<<endl;
           }
           else
           {
               result=num1/num2;
          cout<<num1<<op<<num2<<"="<<result<<endl;        
           }
           break;
           default: //以上情况都不是
           cout<<caption2<<endl;
    }
       return 0;

}
//ʵ�ּ򵥵ļӼ��˳����ʽ�ļ���
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double num1,num2;//����ʵ��
    char op;//һ�������
    double result;
    char caption1[20]="Error,Divided by 0!";//��ĸΪ0
    char caption2[20]="Invalid operator!";//�Ƿ������
    cout<<"������ʽ:";
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
        if(fabs(num2)<1.0e-8)//����Ϊ0   fabs()ָ����ֵ
           {
               cout<<caption1<<endl;
           }
           else
           {
               result=num1/num2;
          cout<<num1<<op<<num2<<"="<<result<<endl;        
           }
           break;
           default: //�������������
           cout<<caption2<<endl;
    }
       return 0;

}
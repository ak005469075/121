//����һԪ���η��̵�a,b,c����ϵ������һԪ���η���ax^3+bx+c=0;�����������������)
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   double a,b,c;
   double delta;//�����б�ʽ
   double x,x1,x2;
   cout<<"������һԪ���η��̵�����ϵ��a,b,c";
   cin>>a>>b>>c;
   if(a==0)
  {
       if(b==0){cout<<"������ϵ�������ɷ���"<<endl;}
       else
       {//������ϵ������0��һ����ϵ��������0
       x=-c/b;//���㵥��
       cout<<"ʵ��ΪһԪһ�η��̣���Ϊ:"<<x<<endl;     
       }   
  }
    else{//������ϵ����Ϊ0
    delta=b*b-4.0*a*c;
    if(delta>=0){
        delta=sqrt(delta);
        x1=(-b+delta)/2.0/a;//��1
        x2=(-b-delta)/2.0/a;//��2
        cout<<"������ʵ����������:"<<endl;
        cout<<x1<<" "<<x2<<endl;
                 }
        }    
        return 0;
}
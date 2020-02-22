#include<iostream>
using namespace std;
int main()
{
    char c,y;
    cin>>c;
    y=(c>='a'&&c<='z'?c-32:c);
    cout<<y;
    return 0;
}
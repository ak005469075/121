#include<iostream>
using namespace std;
int main()
{
    int c,n;
    cin>>c;
    n=(c<0?-c:c);
(c<0?cout<<"-"<<dec<<n<<" "<<"-"<<hex<<n<<" "<<"-"<<oct<<n:cout<<dec<<n<<" "<<hex<<n<<" "<<oct<<n);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    float x,a,b,c;
    cout<<"Input numbers"<<endl;
    cin>>a>>b>>c;
    x=a;
     a=c;
      c=b;
       b=x;
    cout<<"A="<<a<<", B="<<b<<", C="<<c<<endl;
}

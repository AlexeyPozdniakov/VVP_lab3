#include <iostream>
#include <math.h>
using namespace std;
int
main ()
{
  cout << "Input numbers" << endl;
  float a, b, c;
  cin>>a>>b;
  c=a;
  a=b;
  b=c;
  cout << "A=" <<a<< ", B=" <<b;
}

#include <iostream>
#include "cell.h"
using namespace std;

int main()
{
  Cell<int> T;
  float y = 11/2;
  T.setdata(3,3,y);
  cout << T.getdata(3,3);
  return 0;
}

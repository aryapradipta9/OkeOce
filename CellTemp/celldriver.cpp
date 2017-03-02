#include <iostream>
#include "cell.h"
#include "facility.h"
using namespace std;

int main()
{
  Cell* obj[2];
  obj[0] = new Facility(5,0);
  obj[1] = new Facility(1,1);
  cout << obj[0]->GetX();
  return 0;
}

#include <iostream>
#include "cell.h"
#include "facility.h"
#include "road.h"
using namespace std;

int main()
{
  Cell* obj[2];
  obj[0] = new Facility(5,0);
  obj[1] = new Road(1,1);
  cout << obj[0]->isJalan()<<endl;
  cout << obj[1]->isJalan()<<endl;
  return 0;
}

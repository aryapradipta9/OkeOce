#ifndef FACILITY_H
#define FACILITY_H
#include "cell.h"
using namespace std;

class Facility : public Cell
{
public:
  Facility(int posx, int posy) : Cell()
  {
    Cell::x = posx;
    Cell::y = posy;
  }
};
#endif

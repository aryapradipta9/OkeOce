#ifndef FACILITY_H
#define FACILITY_H
#include "point.h"
using namespace std;

class Facility : public Point
{
public:
  Facility(int posx,int posy) : Point()
  {
    Point::x = posx;
    Point::y = posy;
  }
};
#endif

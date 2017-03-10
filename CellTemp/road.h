#ifndef ROAD_H
#define ROAD_H
#include "facility.h"
using namespace std;

class Road : public Facility
{
public:
  Road(int posx, int posy) : Facility(posx,posy)
  {}
  virtual bool isJalan()
  {
    return true;
  }
  void render(char** cc)
  {
    cc[Point::y][Point::x] = '-';
  }
};
#endif

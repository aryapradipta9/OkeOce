#ifndef ENTRANCE_H
#define ENTRANCE_H
#include "road.h"
using namespace std;

class Entrance : public Road
{
public:
  Entrance(int posx, int posy) : Road(posx,posy)
  {}
};
#endif

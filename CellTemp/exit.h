#ifndef EXIT_H
#define EXIT_H
#include "road.h"
using namespace std;

class Exit : public Road
{
public:
  Exit(int posx, int posy) : Road(posx,posy)
  {}
};
#endif

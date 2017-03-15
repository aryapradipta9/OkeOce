#ifndef ENTRANCE_H
#define ENTRANCE_H
#include "road.h"
using namespace std;

class Entrance : public Road {
public:
  /**  @brief Jalan masuk
    @param pos_x posisi x
    @param pos_y posisi y
    */
  Entrance(int pos_x, int pos_y);
};
#endif

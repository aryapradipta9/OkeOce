#ifndef FACILITY_H
#define FACILITY_H
#include "point.h"
using namespace std;

class Facility : public Point {
public:
  /** @brief Constructor
    * @param pos_x posisi x
    * @param pos_y posisi y
    */
  Facility(int pos_x, int pos_y);
};
#endif

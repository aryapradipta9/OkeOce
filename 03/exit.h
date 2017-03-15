#ifndef EXIT_H
#define EXIT_H
#include "road.h"
using namespace std;

class Exit : public Road {
public:
  /** @brief Jalan keluar
    * @param pos_x posisi x
    * @param pos_y posisi y
    */
  Exit(int pos_x, int pos_y);
};
#endif

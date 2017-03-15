#ifndef PARK_H
#define PARK_H
#include "facility.h"
using namespace std;

class Park : public Facility
{
public:
  /** @brief Constructor
    * @param pos_x posisi x
    * @param pos_y posisi y
    */
  Park(int pos_x, int pos_y);

  /** @brief Kelas virtual render
    * @param cc matriks yang akan diprint
    */
  char Render();
};
#endif

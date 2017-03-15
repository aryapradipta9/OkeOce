#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "facility.h"
using namespace std;

class Restaurant : public Facility
{
public:
  /** @brief Constructor
    * @param pos_x posisi x
    * @param pos_y posisi y
    */
  Restaurant(int pos_x, int pos_y);
  /** @brief render Mencetak ke matriks
    * @param cc matriks yang sudah terisi
    */
  char Render();
};
#endif

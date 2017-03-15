#ifndef ROAD_H
#define ROAD_H
#include "facility.h"
using namespace std;

class Road : public Facility
{
public:
  /** @brief jalan
    * @param pos_x posisi x
    * @param pos_y posisi y
    */
  Road(int pos_x, int pos_y);
  /** @brief IsJalan
    * @return true jika jalan.
    */
  virtual bool IsJalan();
  /** @brief Kelas virtual render
    * @param cc matriks yang akan diprint
    */
  char Render();
};
#endif

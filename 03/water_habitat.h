#ifndef WATER_HABITAT_H
#define WATER_HABITAT_H
#include "habitat.h"

class WaterHabitat : public Habitat{
  public:
    /** @brief constructor
      * @param pos_x posisi x
      * @param pos_y posisi y
      */
    WaterHabitat(int pos_x, int pos_y);
      /** @brief Destructor
      */
    virtual ~WaterHabitat();
    /** @brief Kelas virtual render
      * @param cc matriks yang akan diprint
      */
    char Render();
};
#endif

#ifndef LAND_HABITAT_H
#define LAND_HABITAT_H
#include "habitat.h"

class LandHabitat : public Habitat {
  public:
    /** @brief constructor
      * @param pos_x posisi x
      * @param pos_y posisi y
      */
    LandHabitat(int pos_x, int pos_y);
    /** @brief Destructor
      */
    virtual ~LandHabitat();
    /** @brief Kelas virtual render
      * @param cc matriks yang akan diprint
      */
    void Render(char** cc);
};
#endif

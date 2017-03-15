#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H
#include "habitat.h"

class AirHabitat : public Habitat {
  public:
  /** @brief constructor
    * @param pos_x posisi x
    * @param pos_y posisi y
    */
  AirHabitat(int pos_x, int pos_y);
  /** @brief Destructor
    */
  virtual ~AirHabitat();
  /** @brief Kelas virtual render
    * @param cc matriks yang akan diprint
    */
  char Render();
};
#endif

#include "water_habitat.h"

/** @brief constructor
  * @param pos_x posisi x
  * @param pos_y posisi y
  */
WaterHabitat::WaterHabitat(int pos_x, int pos_y) : Habitat(pos_x,pos_y) {
  Habitat::habitat_type = 1;
}
/** @brief Destructor
  */
WaterHabitat::~WaterHabitat() {}
  /** @brief Kelas virtual render
    * @param cc matriks yang akan diprint
    */
char WaterHabitat::Render() {
  return('$');
}

#include "air_habitat.h"

/** @brief constructor
  * @param pos_x posisi x
  * @param pos_y posisi y
  */
AirHabitat::AirHabitat(int pos_x, int pos_y) : Habitat(pos_x,pos_y) {
  Habitat::habitat_type = 1;
}
/** @brief Destructor
  */
AirHabitat::~AirHabitat() {}
  /** @brief Kelas virtual render
    * @param cc matriks yang akan diprint
    */
void AirHabitat::Render(char** cc)
{
  cc[Point::y][Point::x] = '%';
}

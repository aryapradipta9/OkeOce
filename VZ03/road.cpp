#include "road.h"

/** @brief jalan
  * @param pos_x posisi x
  *	@param pos_y posisi y
  */
Road::Road(int pos_x, int pos_y) : Facility(pos_x,pos_y) {}
/** @brief IsJalan
  * @return true jika jalan.
  */
bool Road::IsJalan() {
  return true;
}
  /** @brief Kelas virtual render
    * @param cc matriks yang akan diprint
    */
void Road::Render(char** cc) {
  cc[Point::y][Point::x] = '-';
}

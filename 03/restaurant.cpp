#include "restaurant.h"
using namespace std;
  /** @brief Constructor
    * @param pos_x posisi x
    * @param pos_y posisi y
    */
Restaurant::Restaurant(int pos_x, int pos_y) : Facility(pos_x,pos_y) {};
  /** @brief Kelas virtual render
    * @param cc matriks yang akan diprint
    */
char Restaurant::Render() {
  return('R');
}

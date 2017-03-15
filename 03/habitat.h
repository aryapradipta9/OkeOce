#ifndef HABITAT_H
#define HABITAT_H
#include "point.h"
using namespace std;

class Habitat : public Point {
  public:
    /** @brief Constructor
      * @param pos_x posisi x
      * @param pos_y posisi y
      */
    Habitat(int pos_x, int pos_y);
    /** @brief setcagenum
      * @param x nomor
      */
    void SetCageNum(int x);
    /** @brief dapat cage_num
      * @return cage_num
      */
    int GetCageNum();
    /** @brief apakah Habitat
      * @return true
      */
    virtual bool IsHabitat();
  protected:
    /** tipe habitat 1 land 2 air 3 water
      */
    short habitat_type;
    /** nomor kandang dalam cell
      */
    int cage_num;
};
#endif

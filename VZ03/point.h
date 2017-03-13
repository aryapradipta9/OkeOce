#ifndef POINT_H
#define POINT_H
#include "renderable.h"

class Point : virtual public Renderable {
  public:
    /** @brief constructor
      */
    Point();
    /** @brief destructor
      */
    virtual ~Point();
    /** @brief dapat x
      * @return posisi x
      */
    int GetX();
    /** @brief dapat y
      * @return posisi y
      */
    int GetY();
    /** @brief set x
      * @param posisi x
      */
    void SetX(int input_x);
    /** @brief set x
      * @param posisi x
      */
    void SetY(int input_y);
    /** @brief IsJalan
      * @return true jika jalan. false jika tidak.
      */
    virtual bool IsJalan();
    /** @brief isHabitat
      * @return true jika habitat. false jika tidak.
      */
    virtual bool IsHabitat();
  protected:
    /** posisi x
      */
    int x;
    /** posisi y
      */
    int y;
};
#endif

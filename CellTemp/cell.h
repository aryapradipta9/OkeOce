#ifndef CELL_H
#define CELL_H

class Cell
{
  public:
  Cell(){}
  ~Cell(){}
  int GetX()
  {
    return x;
  }
  protected:
    int x;
    int y;
};
#endif

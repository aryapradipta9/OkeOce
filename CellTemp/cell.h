#ifndef CELL_H
#define CELL_H

class Cell
{
  public:
  Cell(){}
  ~Cell(){}
  virtual bool isJalan()
  {
    return false;
  }
  int GetX()
  {
    return x;
  }
  protected:
    int x;
    int y;
};
#endif

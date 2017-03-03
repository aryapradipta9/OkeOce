#ifndef HERBIFOR_H
#define HERBIFOR_H

class Herbifor
{
public:
  Herbifor()
  {
    JenisMakanan = "Herbifor";
  }
  virtual void FoodExp()
  {
    cout << JenisMakanan << endl;
    cout << Makanan << endl;
    cout << "Beratnya adalah" << Berat << endl;
  }
protected:
  string JenisMakanan;
  int Berat;
  string Makanan;
};
#endif

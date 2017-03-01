// Author : 13515017 / Putu Arya Pradipta
// File : animal.h

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
  public:
    Animal(); //ctor
    Animal(const Animal&); //cctor
    ~Animal(); //dtor
    Animal& operator= (const Animal&); //operator=
    ShowExperience(); // menampilkan experience setiap binatang
  protected:
    char* AniType;
    char* Exp;
    char* Family;
    char* Species;
}
#endif

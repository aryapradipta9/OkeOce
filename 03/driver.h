#ifndef DRIVER_H
#define DRIVER_H
#include <cstdio>
#include <iostream>
#define clearScreen() printf("\033[H\033[J")
#include "air_animal.h"
#include "air_habitat.h"
#include "animal.h"
#include "cell.h"
#include "entrance.h"
#include "exit.h"
#include "facility.h"
#include "habitat.h"
#include "herbivora.h"
#include "karnivora.h"
#include "land_animal.h"
#include "land_habitat.h"
#include "omnivora.h"
#include "park.h"
#include "point.h"
#include "renderable.h"
#include "restaurant.h"
#include "road.h"
#include "water_animal.h"
#include "water_habitat.h"
#include "amphibi.h"
using namespace std;

class Driver{
public:
  void MainMenu();
  void Scen1();
  void Scen2(int pilihan);
};

#endif

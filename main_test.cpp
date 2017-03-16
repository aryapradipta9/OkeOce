#ifdef __STRICT_ANSI__
#undef __STRICT_ANSI__
#endif
#include<gtest/gtest.h>
#include "land_animal.h"
#include "air_habitat.h"
#include "animal.h"
#include "cage.h"
#include "cell.h"
#include "entrance.h"
#include "exit.h"
#include "facility.h"
#include "habitat.h"
#include "karnivora.h"
#include "omnivora.h"
#include "herbivora.h"
#include "park.h"
#include "point.h"
#include "renderable.h"
#include "restaurant.h"
#include "road.h"
#include "water_habitat.h"
#include "land_habitat.h"
#include "water_animal.h"
#include "amphibi.h"
#include "air_animal.h"
class LandAnimalTest : public ::testing::Test {
  protected:
    AnimalTest(){}
};

TEST(LandAnimalTest, GetTextMethod) {
  Fox F;
  ASSERT_EQ('B',F.GetRender());
  ASSERT_EQ(1,F.GetType()[0]);
  ASSERT_EQ(0,F.GetTopEnemy());
  ASSERT_EQ("Vulpes lagopus",F.GetSpecies());
  ASSERT_EQ("What does the fox says : Mikoon",F.GetIsiExperience());
  ASSERT_EQ("Canidae",F.GetFamili());
};

class WaterAnimalTest : public ::testing::Test {
  protected:
    WaterAnimalTest(){}
};

TEST(WaterAnimalTest, GetTextMethod) {
  Whale w;
  ASSERT_EQ('r',w.GetRender());
  ASSERT_EQ(1,w.GetType()[2]);
  ASSERT_EQ(0,w.GetTopEnemy());
  ASSERT_EQ("Balaenoptera musculus",w.GetSpecies());
  ASSERT_EQ("MASSIVE SEA-CREATURE",w.GetIsiExperience());
  ASSERT_EQ("Cetacea",w.GetFamili());
};

class AirAnimalTest : public ::testing::Test {
  protected:
    AirAnimalTest(){}
};

TEST(AirAnimalTest, GetTextMethod) {
  Eagle e;
  ASSERT_EQ('j',e.GetRender());
  ASSERT_EQ(1,e.GetType()[1]);
  ASSERT_EQ(2,e.GetTopEnemy());
  ASSERT_EQ("Aquila chrysaetos",e.GetSpecies());
  ASSERT_EQ("screeech!",e.GetIsiExperience());
  ASSERT_EQ("Accipitridae",e.GetFamili());
};

class AmphibiAnimalTest : public ::testing::Test {
  protected:
    AmphibiAnimalTest(){}
};

TEST(AmphibiAnimalTest, GetTextMethod) {
  Salamander e;
  ASSERT_EQ('x',e.GetRender());
  ASSERT_EQ(1,e.GetType()[2]);
  ASSERT_EQ(1,e.GetType()[0]);
  ASSERT_EQ(0,e.GetTopEnemy());
  ASSERT_EQ("Adnrias japonicus",e.GetSpecies());
  ASSERT_EQ("Salamander",e.GetIsiExperience());
  ASSERT_EQ("Cryptobranchidae",e.GetFamili());
};

class RoadTest : public ::testing::Test {
  protected:
    RoadTest(){}
};

TEST(RoadTest, GetTextMethod) {
  Road x (10,10);
  ASSERT_EQ(true,x.IsJalan());
  ASSERT_EQ(false,x.IsHabitat());
  ASSERT_EQ(10,x.GetX());
  ASSERT_EQ(10,x.GetY());
};

class ParkTest : public ::testing::Test {
  protected:
    ParkTest(){}
};

TEST(ParkTest, GetTextMethod) {
	Park x (10,10);
  ASSERT_EQ(false,x.IsJalan());
  ASSERT_EQ(false,x.IsHabitat());
  ASSERT_EQ(10,x.GetX());
  ASSERT_EQ(10,x.GetY());	
};

class RestaurantTest : public ::testing::Test {
  protected:
    RestaurantTest(){}
};

TEST(RestaurantTest, GetTextMethod) {
  Restaurant x (10,10);
  ASSERT_EQ(false,x.IsJalan());
  ASSERT_EQ(false,x.IsHabitat());
  ASSERT_EQ(10,x.GetX());
  ASSERT_EQ(10,x.GetY());	
};

class WaterHabitatTest : public ::testing::Test {
  protected:
    WaterHabitatTest(){}
};

TEST(WaterHabitatTest, GetTextMethod) {
  WaterHabitat w (10,10);
  w.SetCageNum(10);
  ASSERT_EQ(10,w.GetCageNum());
  ASSERT_EQ(true,w.IsHabitat());
  ASSERT_EQ(false,w.IsJalan());
};

class LandHabitatTest : public ::testing::Test {
  protected:
    LandHabitatTest(){}
};

TEST(LandHabitatTest, GetTextMethod) {
  LandHabitat l (10,10);
  l.SetCageNum(10);
  ASSERT_EQ(10,l.GetCageNum());
  ASSERT_EQ(true,l.IsHabitat());
  ASSERT_EQ(false,l.IsJalan());
};

class AirHabitatTest : public ::testing::Test {
  protected:
    AirHabitatTest(){}
};

TEST(AirHabitatTest, GetTextMethod) {
  AirHabitat i (10,10);
  i.SetCageNum(10);
  ASSERT_EQ(10,i.GetCageNum());
  ASSERT_EQ(true,i.IsHabitat());
  ASSERT_EQ(false,i.IsJalan());	
};

class PointTest : public ::testing::Test {
  protected:
    PointTest(){}
};

TEST(PointTest, GetTextMethod) {
  Point p;
  p.SetX(999);
  p.SetY(888);
  ASSERT_EQ(999,p.GetX());
  ASSERT_EQ(888,p.GetY());	
};

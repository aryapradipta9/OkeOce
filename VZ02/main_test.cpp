#include "include.h"
#include<gtest/gtest.h>

class LandHabitatTest : public ::testing::Test {
  protected:
    LandHabitatTest(){}
};

TEST(LandHabitatTest, GetTextMethod) {
  LandHabitat lh;
  ASSERT_EQ('*', lh.GetRender());
};

class AirHabitatTest : public ::testing::Test {
  protected:
    AirHabitatTest(){}
};

TEST(AirHabitatTest, GetTextMethod) {
  AirHabitat ah;
  ASSERT_EQ('%', ah.GetRender());
};

class WaterHabitatTest : public ::testing::Test {
  protected:
    WaterHabitatTest(){}
};

TEST(WaterHabitatTest, GetTextMethod) {
  WaterHabitat wh;
  ASSERT_EQ('$', wh.GetRender());
};

class RoadTest : public ::testing::Test {
  protected:
    RoadTest(){}
};

TEST(RoadTest, GetTextMethod) {
  Road rd;
  ASSERT_EQ('-', rd.GetRender());
};

class AfricanElephantTest : public ::testing::Test {
  protected:
    AfricanElephantTest(){}
};

TEST(AfricanElephantTest, GetTextMethod) {
  AfricanElephant gj;
  ASSERT_EQ('z', gj.GetRender());
};

class AnoaTest : public ::testing::Test {
  protected:
    AnoaTest(){}
};

TEST(AnoaTest, GetTextMethod) {
  Anoa an;
  ASSERT_EQ('K', an.GetRender());
};

class BearTest : public ::testing::Test {
  protected:
    BearTest(){}
};

TEST(BearTest, GetTextMethod) {
  Bear br;
  ASSERT_EQ('H', br.GetRender());
};

class GirrafeTest : public ::testing::Test {
  protected:
    GirrafeTest(){}
};

TEST(GirrafeTest, GetTextMethod) {
  Girrafe gf;
  ASSERT_EQ('Q', gf.GetRender());
};

class EagleTest : public ::testing::Test {
  protected:
    EagleTest(){}
};

TEST(EagleTest, GetTextMethod) {
  Eagle eg;
  ASSERT_EQ('j', eg.GetRender());
};

class GorillaTest : public ::testing::Test {
  protected:
    GorillaTest(){}
};

TEST(GorillaTest, GetTextMethod) {
  Gorilla go;
  ASSERT_EQ('T', go.GetRender());
};

class IndianPhytonTest : public ::testing::Test {
  protected:
    IndianPhytonTest(){}
};

TEST(IndianPhytonTest, GetTextMethod) {
  IndianPhyton ip;
  ASSERT_EQ('a', ip.GetRender());
};

class LionTest : public ::testing::Test {
  protected:
    LionTest(){}
};

TEST(LionTest, GetTextMethod) {
  Lion lion;
  ASSERT_EQ('F', lion.GetRender());
};

class TigerTest : public ::testing::Test {
  protected:
    TigerTest(){}
};

TEST(TigerTest, GetTextMethod) {
  Tiger ti;
  ASSERT_EQ('E', ti.GetRender());
};

class MerakTest : public ::testing::Test {
  protected:
    MerakTest(){}
};

TEST(MerakTest, GetTextMethod) {
  Merak mr;
  ASSERT_EQ('l', mr.GetRender());
};

class PandaTest : public ::testing::Test {
  protected:
    PandaTest(){}
};

TEST(PandaTest, GetTextMethod) {
  Panda pd;
  ASSERT_EQ('I', pd.GetRender());
};

class PariTest : public ::testing::Test {
  protected:
    PariTest(){}
};

TEST(PariTest, GetTextMethod) {
  Pari pr;
  ASSERT_EQ('q', pr.GetRender());
};

class ReindeerTest : public ::testing::Test {
  protected:
    ReindeerTest(){}
};

TEST(ReindeerTest, GetTextMethod) {
  Reindeer ri;
  ASSERT_EQ('c', ri.GetRender());
};

class RhinoTest : public ::testing::Test {
  protected:
    RhinoTest(){}
};

TEST(RhinoTest, GetTextMethod) {
  Rhino rh;
  ASSERT_EQ('N', rh.GetRender());
};

class SquirrelMonkeyTest : public ::testing::Test {
  protected:
    SquirrelMonkeyTest(){}
};

TEST(SquirrelMonkeyTest, GetTextMethod) {
  SquirrelMonkey sq;
  ASSERT_EQ('V', sq.GetRender());
};

class ZebraTest : public ::testing::Test {
  protected:
    ZebraTest(){}
};

TEST(ZebraTest, GetTextMethod) {
  Zebra zb;
  ASSERT_EQ('f', zb.GetRender());
};

class WhiteSharkTest : public ::testing::Test {
  protected:
    WhiteSharkTest(){}
};

TEST(WhiteSharkTest, GetTextMethod) {
  WhiteShark ws;
  ASSERT_EQ('o', ws.GetRender());
};

class WhaleTest : public ::testing::Test {
  protected:
    WhaleTest(){}
};

TEST(WhaleTest, GetTextMethod) {
  Whale we;
  ASSERT_EQ('r', we.GetRender());
};

class PenguinTest : public ::testing::Test {
  protected:
    PenguinTest(){}
};

TEST(PenguinTest, GetTextMethod) {
  Penguin pu;
  ASSERT_EQ('k', pu.GetRender());
};

class SeaDragonTest : public ::testing::Test {
  protected:
    SeaDragonTest(){}
};

TEST(SeaDragonTest, GetTextMethod) {
  SeaDragon sd;
  ASSERT_EQ('j', sd.GetRender());
};

//#include "include.h"
#include "road.h"
#include <iostream>
#include <string>
int main(){
  char Map[15][9];
  int FoodNum[15][9];
  int Experience[15][9];
  char ArrayHabitat[15][9];
  string ArrayExperience[11];
  //inisiasi Map;
  //Dog b;
  Road rd;
  int i,j;
  for(i=0;i<15;i++){
    for(j=0;j<9;j++)
	{
	  ArrayHabitat[i][j] = ' ';
	}
  }
  for (i=0;i<9;i++){
    ArrayHabitat[0][i] = rd.GetRender();
  }
  for (i=0;i<15;i++){
    ArrayHabitat[i][0] = rd.GetRender();
  }
  for (i=0;i<9;i++){
    ArrayHabitat[14][i] = rd.GetRender();
  }
  for (i=0;i<15;i++){
    ArrayHabitat[i][8] = rd.GetRender();
  }
  for (i=0;i<=4;i++){
    ArrayHabitat[i][2] = rd.GetRender();
  }
  for (i=2;i<=8;i++){
    ArrayHabitat[4][i] = rd.GetRender();
  }
  for (i=4;i<=8;i++){
    ArrayHabitat[i][5] = rd.GetRender();
  }
  for (i=0;i<=5;i++){
    ArrayHabitat[8][i] = rd.GetRender();
  }
  
  // inisiasi habitat
  LandHabitat lh;
  WaterHabitat wh;
  AirHabitat ah;
  for (i=1;i<=4;i++){
    ArrayHabitat[i][1] = wh.GetRender();
  }  
  for (i=3;i<=6;i++){
    ArrayHabitat[3][i] = wh.GetRender();
  }
  for (i=5;i<=7;i++){
    ArrayHabitat[i][6] = wh.GetRender();
  }
  for (i=5;i<=8;i++){
    ArrayHabitat[i][7] = wh.GetRender();
  }
  for (i=1;i<=5;i++){
    ArrayHabitat[9][i] = wh.GetRender();
  }
  for (i=1;i<=5;i++){
    ArrayHabitat[10][i] = wh.GetRender();
  }
  for (i=1;i<=5;i++){
    ArrayHabitat[11][i] = wh.GetRender();
  }

  //printmatriks
  for(i=0;i<15;i++){
    for(j=0;j<9;j++)
	{
	  cout << ArrayHabitat[i][j];
	}
	cout << endl;
  }
  return 0;
  
}
#include "include.h"
#include <iostream>
#include <string>
int main(){

  int FoodNum[20][20];
  //int Experience[15][9];
  char ArrayHabitat[20][20];
  string ArrayExperience[11];

  Road rd;
  int i,j;
  for(i=0;i<15;i++){
    for(j=0;j<10;j++)
  	{
  	  ArrayHabitat[i][j] = ' ';
      FoodNum[i][j] = 0;

  	}
  }
  for(i=0;i<11;i++) ArrayExperience[i] = "";
  for (i=0;i<10;i++){
    ArrayHabitat[0][i] = rd.GetRender();
  }
  for (i=0;i<15;i++){
    ArrayHabitat[i][0] = rd.GetRender();
  }
  for (i=0;i<10;i++){
    ArrayHabitat[14][i] = rd.GetRender();
  }
  for (i=0;i<15;i++){
    ArrayHabitat[i][9] = rd.GetRender();
  }
  for (i=0;i<=4;i++){
    ArrayHabitat[i][2] = rd.GetRender();
  }
  for (i=2;i<=9;i++){
    ArrayHabitat[4][i] = rd.GetRender();
  }
  for (i=4;i<=9;i++){
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
  for (i=3;i<=8;i++){
    ArrayHabitat[1][i] = lh.GetRender();
  }
  for (i=3;i<=8;i++){
    ArrayHabitat[2][i] = lh.GetRender();
  }
  ArrayHabitat[3][7] = lh.GetRender();
  ArrayHabitat[3][8] = lh.GetRender();
  for (i=5;i<=7;i++){
    ArrayHabitat[i][6] = wh.GetRender();
  }
  for (i=8;i<=12;i++){
    ArrayHabitat[i][6] = lh.GetRender();
  }
  for (i=5;i<=6;i++){
    ArrayHabitat[i][7] = wh.GetRender();
  }
  for (i=5;i<=6;i++){
    ArrayHabitat[i][8] = wh.GetRender();
  }
  for (i=7;i<=9;i++){
    ArrayHabitat[i][8] = lh.GetRender();
  }
  for (i=7;i<=9;i++){
    ArrayHabitat[i][7] = lh.GetRender();
  }
  for (i=9;i<=12;i++){
    ArrayHabitat[i][7] = lh.GetRender();
  }
  for (i=1;i<=4;i++){
    ArrayHabitat[5][i] = lh.GetRender();
  }
  for (i=1;i<=4;i++){
    ArrayHabitat[6][i] = lh.GetRender();
  }
  for (i=1;i<=4;i++){
    ArrayHabitat[7][i] = ah.GetRender();
  }
  for (i=1;i<=5;i++){
    ArrayHabitat[9][i] = wh.GetRender();
  }
  for (i=1;i<=8;i++){
    ArrayHabitat[10][i] = lh.GetRender();
  }
  for (i=1;i<=8;i++){
    ArrayHabitat[9][i] = lh.GetRender();
  }
  for (i=1;i<=4;i++){
    ArrayHabitat[11][i] = wh.GetRender();
  }
  for (i=5;i<=8;i++){
    ArrayHabitat[11][i] = rd.GetRender();
  }
  for (i=1;i<=8;i++){
    ArrayHabitat[12][i] = lh.GetRender();
  }
  for (i=1;i<=8;i++){
    ArrayHabitat[13][i] = lh.GetRender();
  }


  AfricanElephant gj;
  ArrayHabitat[1][4] = gj.GetRender();
  FoodNum[1][4] = gj.GetFoodNum();
  ArrayExperience[1] = ArrayExperience[1] + gj.GetExperience() + '\n';

  Anoa an;
  ArrayHabitat[2][5] = an.GetRender();
  FoodNum[2][5] = an.GetFoodNum();
  ArrayExperience[1] = ArrayExperience[1] + an.GetExperience() + '\n';

  Bear br;
  ArrayHabitat[2][7] = br.GetRender();
  FoodNum[2][7] = br.GetFoodNum();
  ArrayExperience[1] = ArrayExperience[1] + br.GetExperience() + '\n';

  Girrafe gf;
  ArrayHabitat[3][8] = gf.GetRender();
  FoodNum[3][8] = gf.GetFoodNum();
  ArrayExperience[1] = ArrayExperience[1] + gf.GetExperience() + '\n';

  Eagle eg;
  ArrayHabitat[7][3] = eg.GetRender();
  FoodNum[7][3] = eg.GetFoodNum();
  ArrayExperience[5] = ArrayExperience[5] + eg.GetExperience() + '\n';

  Gorilla go;
  ArrayHabitat[6][2] = go.GetRender();
  FoodNum[6][2] = go.GetFoodNum();
  ArrayExperience[4] = ArrayExperience[4] + go.GetExperience() + '\n';

  IndianPhyton ip;
  ArrayHabitat[5][3] = ip.GetRender();
  FoodNum[5][3] = ip.GetFoodNum();
  ArrayExperience[4] = ArrayExperience[4] + ip.GetExperience() + '\n';

  Lion lion;
  //li = new Lion();
  ArrayHabitat[12][2] = lion.GetRender();
  FoodNum[12][2] = lion.GetFoodNum();
  ArrayExperience[9] = ArrayExperience[9] + lion.GetExperience() + '\n';
  //delete li;

  Tiger ti;
  ArrayHabitat[13][3] = ti.GetRender();
  FoodNum[13][3] = ti.GetFoodNum();
  ArrayExperience[9] = ArrayExperience[9] + ti.GetExperience() + '\n';

  Merak mr;
  ArrayHabitat[13][5] = mr.GetRender();
  FoodNum[13][5] = mr.GetFoodNum();
  ArrayExperience[9] = ArrayExperience[9] + mr.GetExperience() + '\n';

  Panda pd;
  ArrayHabitat[12][7] = pd.GetRender();
  FoodNum[12][7] = pd.GetFoodNum();
  ArrayExperience[9] = ArrayExperience[9] + pd.GetExperience() + '\n';

  Reindeer ri;
  ArrayHabitat[8][7] = ri.GetRender();
  FoodNum[8][7] = ri.GetFoodNum();
  ArrayExperience[7] = ArrayExperience[7] + ri.GetExperience() + '\n';

  Rhino rh;
  ArrayHabitat[10][7] = rh.GetRender();
  FoodNum[10][7] = rh.GetFoodNum();
  ArrayExperience[7] = ArrayExperience[7] + rh.GetExperience() + '\n';

  SquirrelMonkey sq;
  ArrayHabitat[10][2] = sq.GetRender();
  FoodNum[10][2] = sq.GetFoodNum();
  ArrayExperience[7] = ArrayExperience[7] + sq.GetExperience() + '\n';

  Zebra zb;
  ArrayHabitat[9][4] = zb.GetRender();
  FoodNum[9][4] = zb.GetFoodNum();
  ArrayExperience[7] = ArrayExperience[7] + zb.GetExperience() + '\n';

  WhiteShark ws;
  ArrayHabitat[2][1] = ws.GetRender();
  FoodNum[2][1] = ws.GetFoodNum();
  ArrayExperience[3] = ArrayExperience[3] + ws.GetExperience() + '\n';

  Whale* we;
  we = new Whale();
  ArrayHabitat[3][4] = we->GetRender();
  FoodNum[3][4] = we->GetFoodNum();
  ArrayExperience[2] = ArrayExperience[2] + we->GetExperience() + '\n';
  delete we;

  Penguin pu;
  ArrayHabitat[5][8] = pu.GetRender();
  FoodNum[5][8] = pu.GetRender();
  ArrayExperience[6] = ArrayExperience[6] + pu.GetExperience() + '\n';

  SeaDragon sd;
  ArrayHabitat[6][6] = sd.GetRender();
  FoodNum[6][6] = sd.GetRender();
  ArrayExperience[6] = ArrayExperience[6] + sd.GetExperience() + '\n';

  Pari pr;
  ArrayHabitat[11][3] = pr.GetRender();
  FoodNum[11][3] = pr.GetRender();
  ArrayExperience[8] = ArrayExperience[8] + pr.GetExperience() + '\n';

//printmatriks


int pilihan;
cin >> pilihan;
if (pilihan == 1){
for(i=0;i<15;i++){
  for(j=0;j<10;j++)
{
  cout << ArrayHabitat[i][j];
}
cout << endl;
}
}
else{
  int count = 0;
  for(i=0;i<15;i++){
    for(j=0;j<10;j++){
      count = count +  FoodNum[i][j];
    }
  }cout << count << endl;
}
  return 0;

}

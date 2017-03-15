#include "cell.h"
#include <cstdio>
#include <iostream>
#define clearScreen() printf("\033[H\033[J")

/** @brief Constructor
  */
Cell::Cell():size_x(50),size_y(50)
{
  //KAMUS
  int i;

  //ALGORITMA
  pos=new Point**[size_y];
  for (i=0;i<size_x;i++)
  {
    pos[i]=new Point*[size_x];
  }
  EmptyPos = size_x * size_y;
  adaEntry = false;
  adaExit = false;
  SizeCage = 50;
  C = new Cage*[SizeCage];
  TopCage = 0;
}
/** @brief Constructor
  * @param x ukuran x
  * @param y ukuran y
  * @param jumlahkandang
  */
Cell::Cell(int x, int y, int jumlahkandang):size_x(x),size_y(y)
{
  //KAMUS
  int i;

  //ALGORITMA
  pos=new Point**[size_y];
  for (i=0;i<size_x;i++)
  {
    pos[i]=new Point*[size_x];
  }
  EmptyPos = size_x * size_y;
  adaEntry = false;
  adaEntry = false;
  adaExit = false;
  SizeCage = jumlahkandang;
  C = new Cage*[SizeCage];
  TopCage = 0;
}

/** @brief Destructor
  */
Cell::~Cell() {}

/** @brief SetCage
  * @param cg nawn
  */
void Cell::SetCage(Cage* cg)
{
  C[TopCage] = cg;
  C[TopCage]->SetCageNum(TopCage);
  cout << C[TopCage]->GetCageNum();
  TopCage++;
}
/** @brief SetCellTarge
  * @param F Nawn
  */
void Cell::SetCellTarget(Point* F)
{
  // harusnya ada pengaman tapi aing gatau gimana
  // asumsi F sudah berisi koordinat yang tepat
  pos[F->GetY()][F->GetX()] = F;
  EmptyPos--;
}
/** @brief SetEntrace
  * @param ent Nawn
  */
void Cell::SetEntrance(Entrance* ent)
{
  if (!adaEntry)
  {
    pos[ent->GetY()][ent->GetX()] = ent;
    Masuk = ent;
    adaEntry = true;
    EmptyPos--;
  }
}
/** @brief SetExit
  * @param ext Nawn
  */
void Cell::SetExit(Exit* ext)
{
  if (!adaExit)
  {
    pos[ext->GetY()][ext->GetX()] = ext;
    Keluar = ext;
    adaExit = true;
    EmptyPos--;
  }
}
/** @brief IsComplete. Semua posisi sudah terisi
  * @return true jika udah penuh
  */
bool Cell::IsComplete()
// cek apakah semua pos telah terisi
{
  return (((EmptyPos == 0) && adaEntry && adaExit) ? true : false);
}
/** @brief Dapat Jalan masuk
  * @return Jalan masuk
  */
Entrance* Cell::GetEntrance()
{
  return (Masuk);
}
/** @brief Dapat Jalan keluar
  * @return Jalan keluar
  */
Exit* Cell::GetExit()
{
  return (Keluar);
}
/** @brief Melihatkan kandang
  * @param nomor kandang
  */
void Cell::ViewCage(int NumCage)
{
  C[NumCage]->ShowHewan();
}
/** @brief Gambar
  * @param rd Nawn
  */
void Cell::Gambar(Point* rd)
{}/*
  int i, j;
  char ** cc;
  cc = new char*[size_y];
  for(i=0; i<size_y;i++) cc[i] = new char[size_x];
  for(i=0; i<size_y; i++)
  {
    for(j=0; j<size_x; j++)
    {
      pos[i][j]->Render(cc);
    }
  }
  for(i=0; i<TopCage; i++)
  {
    C[i]->Render(cc);
  }
  cc[rd->GetY()][rd->GetX()]='Z';
  for(i=0; i<size_y; i++)
  {
    for(j=0; j<size_x; j++)
    {
      cout << cc[i][j];
    }
    cout << endl;
  }
}
/** @brief Lihat Habitat
  * @param rd Nawn
  */
void Cell::SeeHabitat(Point* rd)
{
  Habitat* h = dynamic_cast<Habitat*>(rd);
  cout << h->GetCageNum() << endl;
  C[h->GetCageNum()]->ShowHewan();
}
/** @brief Cek sekitar
  * @param rd Nawn
  */
void Cell::CheckSurrounding(Point* rd)
{
  // cek atas
  if (rd->GetY()>0)
  if(pos[rd->GetY()-1][rd->GetX()]->IsHabitat())
  {
    cout << "Di atas ada hewan" << endl;
    SeeHabitat(pos[rd->GetY()-1][rd->GetX()]);
  }
  // bawah
  if (rd->GetY()<(size_y-1))
  if(pos[rd->GetY()+1][rd->GetX()]->IsHabitat())
  {
    cout << "Di bawah ada hewan" << endl;
    SeeHabitat(pos[rd->GetY()+1][rd->GetX()]);
  }
  // kiri
  if (rd->GetX()>0)
  if(pos[rd->GetY()][rd->GetX()-1]->IsHabitat())
  {
    cout << "Di kiri ada hewan" << endl;
    SeeHabitat(pos[rd->GetY()][rd->GetX()-1]);
  }
cout <<rd->GetY() << rd->GetX() << endl;
  // kanan
  if (rd->GetX()<(size_x-1))
  if(pos[rd->GetY()][rd->GetX()+1]->IsHabitat())
  {
    cout << "Di kanan ada hewan" << endl;
    SeeHabitat(pos[rd->GetY()][rd->GetX()+1]);
  }
}
/** @brief Tour
  */
void Cell::Tour()
{
  //awal di Entrance
  Point* rd;
  char i;
  rd = Masuk;
  while (rd != Keluar)
  {
    clearScreen();
    cout << "Peta Jaki Zoo" << endl;
    //Gambar(rd);
    cout << endl;
    CheckSurrounding(rd);
    cout <<endl<< "Pilih jalan selanjutnya : " ;
    cin >> i;
        if (i == 'l') rd = MoveKiri(rd);
        else if (i == 'r') rd = MoveKanan(rd);
        else if (i == 'u') rd = MoveAtas(rd);
        else if (i == 'd') rd = MoveBawah(rd);
    cout << rd->GetX() << rd->GetY() << endl;
  }
}
/** @brief Gerak Kiri
  * @param rd Nawn
  *  @return point setelah pindah
  */
Point* Cell::MoveKiri(Point* rd)
{
  Point* retval = rd;
  if (rd->GetX()>0)
  if (pos[rd->GetY()][rd->GetX()-1]->IsJalan())
  {
    retval = pos[rd->GetY()][rd->GetX()-1];
  }
  return retval;
}
/** @brief Gerak Kanan
  * @param rd Nawn
  *  @return point setelah pindah
  */
Point* Cell::MoveKanan(Point* rd)
{
  Point* retval = rd;
  if (rd->GetX()<(size_x-1))
  if (pos[rd->GetY()][rd->GetX()+1]->IsJalan())
  {
    retval = pos[rd->GetY()][rd->GetX()+1];
  }
  return retval;
}
/** @brief Gerak Atas
  * @param rd Nawn
  *  @return point setelah pindah
  */
Point* Cell::MoveAtas(Point* rd)
{
  Point* retval = rd;
  if (rd->GetY()>0)
  if (pos[rd->GetY()-1][rd->GetX()]->IsJalan())
  {
    retval = pos[rd->GetY()-1][rd->GetX()];
  }
  return retval;
}
/** @brief Gerak Bawah
  * @param rd Nawn
  *  @return point setelah pindah
  */
Point* Cell::MoveBawah(Point* rd)
{
  Point* retval = rd;
  if (rd->GetY()<(size_y-1))
  if (pos[rd->GetY()+1][rd->GetX()]->IsJalan())
  {
    retval = pos[rd->GetY()+1][rd->GetX()];
  }
  return retval;
}

/** @brief data di x,y
  * @param x posisi x
  * @param y posisi y
  *  @return point
  */
Point* Cell::getdata(int x,int y)
{
  return(pos[y][x]);
}  //type cell di x dan y
/** @brief set data di x,y
  * @param x posisi x
  * @param y posisi y
  */
void Cell::setdata(int x, int y,Point* t) //set type pada cell x dan y
{
  pos[x][y]=t;
}

/** @brief Total kebutuhan makanan dalam zoo
  *  @return jumlah makan
  */
int Cell::JumlahMakanCell()
{
  int i, temp;
  temp = 0;
  for (i = 0; i < TopCage; i++)
  {
    temp = temp + C[i]->JumlahMakanKandang();
  }
  return temp;
}

void Cell::Gambar()
{
  int i, j;
  int ** cc;
  cc = new int*[20];
  for(i=0; i<20;i++) cc[i] = new int[20];
  Habitat* h;
  for(i=0; i<14; i++)
  {
    for(j=0; j<15; j++)
    {
      if (pos[i][j]->IsHabitat())
      {h = dynamic_cast<Habitat*>(pos[i][j]);
      cc[i][j]=h->GetCageNum();} else {cc[i][j]=9;}
    }
  }
/*
  for(i=0; i<TopCage; i++)
  {
    C[i]->Render(cc);
  }*/
  for(i=0; i<size_x; i++)
  {
    for(j=0; j<size_y; j++)
    {
      cout << cc[j][i];
    }
    cout << endl;
  }
}

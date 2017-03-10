#ifndef CELL_H
#define CELL_H
#include "point.h"
#include "entrance.h"
#include "exit.h"
#include "cage.h"

class Cell{
	public:
		Cell():size_x(50),size_y(50)
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
		Cell(int x, int y, int jumlahkandang):size_x(x),size_y(y)
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
			SizeCage = jumlahkandang;
			C = new Cage*[SizeCage];
			TopCage = 0;
		}
		virtual ~Cell() {}
		void SetCage(Cage* cg)
		{
			C[TopCage] = cg;
			C[TopCage]->SetCageNum(TopCage);
			TopCage++;
		}
    void SetCellTarget(Point* F)
    {
      // harusnya ada pengaman tapi aing gatau gimana
      // asumsi F sudah berisi koordinat yang tepat
      pos[F->gety()][F->getx()] = F;
      EmptyPos--;
    }
    void SetEntrance(Entrance* ent)
    {
      if (!adaEntry)
      {
        pos[ent->gety()][ent->getx()] = ent;
        Masuk = ent;
        adaEntry = true;
        EmptyPos--;
      }
    }
    void SetExit(Exit* ext)
    {
      if (!adaExit)
      {
        pos[ext->gety()][ext->getx()] = ext;
        Keluar = ext;
        adaExit = true;
        EmptyPos--;
      }
    }
    bool IsComplete()
    // cek apakah semua pos telah terisi
    {
      return (((EmptyPos == 0) && adaEntry && adaExit) ? true : false);
    }
    Entrance* GetEntrance()
    {
      return (Masuk);
    }
    Exit* GetExit()
    {
      return (Keluar);
    }
		void ViewCage(int NumCage)
		{
			C[NumCage]->ShowHewan();
		}
		void Jalan()
		{
			
		}
		Cell(const Cell&);
		Cell& operator=(const Cell&);
		int getsize_x();	//ukuran x cell saat ini
		int getsize_y();	//ukuran y cell saat ini
		Point* getdata(int x,int y)
    {
      return(pos[y][x]);
    }	//type cell di x dan y
		void setdata(int x, int y,Point* t) //set type pada cell x dan y
		{
			pos[x][y]=t;
		}
	protected:
		const int size_x;	//ukuran x cell
		const int size_y;	//ukuran y cell
		Point*** pos;		//type dari cell
    int EmptyPos;
    Exit* Keluar;
    bool adaExit;
    Entrance* Masuk;
    bool adaEntry;

    // array of Cage
    Cage** C;
		int TopCage;
		int SizeCage;

};
#endif

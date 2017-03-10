#ifndef CELL_H
#define CELL_H
#include "point.h"
#include "entrance.h"
#include "exit.h"
#include "cage.h"
#include "renderable.h"

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
		void Gambar(Point* rd)
		{
			int i, j;
			char ** cc;
			cc = new char*[size_y];
			for(i=0; i<size_y;i++) cc[i] = new char[size_x];
			for(i=0; i<size_y; i++)
			{
				for(j=0; j<size_x; j++)
				{
					pos[i][j]->render(cc);
				}
			}
			for(i=0; i<TopCage; i++)
			{
				C[i]->render(cc);
			}
			cc[rd->gety()][rd->getx()]='Z';
			for(i=0; i<size_y; i++)
			{
				for(j=0; j<size_x; j++)
				{
					cout << cc[i][j];
				}
				cout << endl;
			}
		}
		void SeeHabitat(Point* rd)
		{
			Habitat* h = dynamic_cast<Habitat*>(rd);
			C[h->GetCageNum()]->ShowHewan();
		}
		void CheckSurrounding(Point* rd)
		{
			// cek atas
			if (rd->gety()>0)
			if(pos[rd->gety()-1][rd->getx()]->isHabitat())
			{
				cout << "Di atas ada hewan" << endl;
				SeeHabitat(pos[rd->gety()-1][rd->getx()]);
			}
			// bawah
			if (rd->gety()<(size_y-1))
			if(pos[rd->gety()+1][rd->getx()]->isHabitat())
			{
				cout << "Di bawah ada hewan" << endl;
				SeeHabitat(pos[rd->gety()+1][rd->getx()]);
			}
			// kiri
			if (rd->getx()>0)
			if(pos[rd->gety()][rd->getx()-1]->isHabitat())
			{
				cout << "Di kiri ada hewan" << endl;
				SeeHabitat(pos[rd->gety()][rd->getx()-1]);
			}
			// kanan
			if (rd->getx()<(size_x-1))
			if(pos[rd->gety()][rd->getx()+1]->isHabitat())
			{
				cout << "Di kanan ada hewan" << endl;
				SeeHabitat(pos[rd->gety()][rd->getx()+1]);
			}
		}
		void Tour()
		{
			//awal di Entrance
			Point* rd;
			int i;
			rd = Masuk;
			while (rd != Keluar)
			{

				Gambar(rd);
				CheckSurrounding(rd);
				cout << "Pilih jalan selanjutnya" << endl;
				cin >> i;
				if (i == 0) rd = MoveKiri(rd);
				else if (i == 1) rd = MoveKanan(rd);
				else if (i == 2) rd = MoveAtas(rd);
				else rd = MoveBawah(rd);
								cout << rd->getx() << rd->gety() << endl;
			}
		}
		Point* MoveKiri(Point* rd)
		{
			Point* retval = rd;
			if (pos[rd->gety()][rd->getx()-1]->isJalan())
			{
				retval = pos[rd->gety()][rd->getx()-1];
			}
			return retval;
		}
		Point* MoveKanan(Point* rd)
		{
			Point* retval = rd;
			if (pos[rd->gety()][rd->getx()+1]->isJalan())
			{
				retval = pos[rd->gety()][rd->getx()+1];
			}
			return retval;
		}
		Point* MoveAtas(Point* rd)
		{
			Point* retval = rd;
			if (pos[rd->gety()-1][rd->getx()]->isJalan())
			{
				retval = pos[rd->gety()-1][rd->getx()];
			}
			return retval;
		}
		Point* MoveBawah(Point* rd)
		{
			Point* retval = rd;
			if (pos[rd->gety()+1][rd->getx()]->isJalan())
			{
				retval = pos[rd->gety()+1][rd->getx()];
			}
			return retval;
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

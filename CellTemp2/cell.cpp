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
	empty_pos = size_x * size_y;
	ada_entry = false;
	ada_exit = false;
	size_cage = 50;
	c = new Cage*[size_cage];
	top_cage = 0;
}
/** @brief Constructor
  * @param x ukuran x
  * @param y ukuran y
  * @param jumlah_kandang
  */
Cell::Cell(int x, int y, int jumlah_kandang):size_x(x),size_y(y)
{
	//KAMUS
	int i;

	//ALGORITMA
	pos=new Point**[size_y];
	for (i=0;i<size_x;i++)
	{
		pos[i]=new Point*[size_x];
	}
	empty_pos = size_x * size_y;
	ada_entry = false;
	ada_exit = false;
	size_cage = jumlah_kandang;
	c = new Cage*[size_cage];
	top_cage = 0;
}

/** @brief Destructor
  */
Cell::~Cell() {}

/** @brief SetCage
  * @param cg nawn
  */
void Cell::SetCage(Cage* cg)
{
	c[top_cage] = cg;
	c[top_cage]->SetCageNum(top_cage);
	top_cage++;
}
/** @brief SetCellTarge
  * @param f Nawn
  */
void Cell::SetCellTarget(Point* f)
{
	// harusnya ada pengaman tapi aing gatau gimana
	// asumsi f sudah berisi koordinat yang tepat
	pos[f->gety()][f->getx()] = f;
	empty_pos--;
}
/** @brief SetEntrace
  * @param ent Nawn
  */
void Cell::SetEntrance(Entrance* ent)
{
	if (!ada_entry)
	{
		pos[ent->gety()][ent->getx()] = ent;
		masuk = ent;
		ada_entry = true;
		empty_pos--;
	}
}
/** @brief SetExit
  * @param ext Nawn
  */
void Cell::SetExit(Exit* ext)
{
	if (!ada_exit)
	{
		pos[ext->gety()][ext->getx()] = ext;
		keluar = ext;
		ada_exit = true;
		empty_pos--;
	}
}
/** @brief IsComplete. Semua posisi sudah terisi
  * @return true jika udah penuh
  */
bool Cell::IsComplete()
// cek apakah semua pos telah terisi
{
	return (((empty_pos == 0) && ada_entry && ada_exit) ? true : false);
}
/** @brief Dapat Jalan masuk
  * @return Jalan masuk
  */
Entrance* Cell::GetEntrance()
{
	return (masuk);
}
/** @brief Dapat Jalan keluar
  * @return Jalan keluar
  */
Exit* Cell::GetExit()
{
	return (keluar);
}
/** @brief Melihatkan kandang
  * @param nomor kandang
  */
void Cell::ViewCage(int NumCage)
{
	c[NumCage]->ShowHewan();
}
/** @brief Gambar
  * @param rd Nawn
  */
void Cell::Gambar(Point* rd)
{
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
	for(i=0; i<top_cage; i++)
	{
		c[i]->Render(cc);
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
/** @brief Lihat Habitat
  * @param rd Nawn
  */
void Cell::SeeHabitat(Point* rd)
{
	Habitat* h = dynamic_cast<Habitat*>(rd);
	c[h->GetCageNum()]->ShowHewan();
}
/** @brief Cek sekitar
  * @param rd Nawn
  */
void Cell::CheckSurrounding(Point* rd)
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
/** @brief Tour
  */
void Cell::Tour()
{
	//awal di Entrance
	Point* rd;
	char i;
	rd = masuk;
	while (rd != keluar)
	{
		clearScreen();
		cout << "Peta Jaki Zoo" << endl;
		Gambar(rd);
		cout << endl;
		CheckSurrounding(rd);
		cout <<endl<< "Pilih jalan selanjutnya : " ;
		cin >> i;
						if (i == 'l') rd = MoveKiri(rd);
						else if (i == 'r') rd = MoveKanan(rd);
						else if (i == 'u') rd = MoveAtas(rd);
						else if (i == 'd') rd = MoveBawah(rd);
						cout << rd->getx() << rd->gety() << endl;
	}
}
/** @brief Gerak Kiri
  * @param rd Nawn
  *	@return point setelah pindah
  */
Point* Cell::MoveKiri(Point* rd)
{
	Point* retval = rd;
	if (rd->getx()>0)
	if (pos[rd->gety()][rd->getx()-1]->isJalan())
	{
		retval = pos[rd->gety()][rd->getx()-1];
	}
	return retval;
}
/** @brief Gerak Kanan
  * @param rd Nawn
  *	@return point setelah pindah
  */
Point* Cell::MoveKanan(Point* rd)
{
	Point* retval = rd;
	if (rd->getx()<(size_x-1))
	if (pos[rd->gety()][rd->getx()+1]->isJalan())
	{
		retval = pos[rd->gety()][rd->getx()+1];
	}
	return retval;
}
/** @brief Gerak Atas
  * @param rd Nawn
  *	@return point setelah pindah
  */
Point* Cell::MoveAtas(Point* rd)
{
	Point* retval = rd;
	if (rd->gety()>0)
	if (pos[rd->gety()-1][rd->getx()]->isJalan())
	{
		retval = pos[rd->gety()-1][rd->getx()];
	}
	return retval;
}
/** @brief Gerak Bawah
  * @param rd Nawn
  *	@return point setelah pindah
  */
Point* Cell::MoveBawah(Point* rd)
{
	Point* retval = rd;
	if (rd->gety()<(size_y-1))
	if (pos[rd->gety()+1][rd->getx()]->isJalan())
	{
		retval = pos[rd->gety()+1][rd->getx()];
	}
	return retval;
}

/** @brief data di x,y
  * @param x posisi x
  * @param y posisi y
  *	@return point
  */
Point* Cell::GetData(int x,int y)
{
	return(pos[y][x]);
}	//type cell di x dan y
/** @brief set data di x,y
  * @param x posisi x
  * @param y posisi y
  */
void Cell::SetData(int x, int y,Point* t) //set type pada cell x dan y
{
	pos[x][y]=t;
}

/** @brief Total kebutuhan makanan dalam zoo
	*	@return jumlah makan
	*/
int Cell::JumlahMakanCell()
{
	int i, temp;
	temp = 0;
	for (i = 0; i < top_cage; i++)
	{
		temp = temp + c[i]->JumlahMakanKandang();
	}
	return temp;
}

void Cell::Gambar()
{
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
	for(i=0; i<top_cage; i++)
	{
		c[i]->Render(cc);
	}
	for(i=0; i<size_y; i++)
	{
		for(j=0; j<size_x; j++)
		{
			cout << cc[i][j];
		}
		cout << endl;
	}
}

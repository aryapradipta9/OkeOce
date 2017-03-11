#include "cell.h"

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
	adaExit = false;
	SizeCage = jumlahkandang;
	C = new Cage*[SizeCage];
	TopCage = 0;
}

/** @brief Destructor
  */
virtual Cell::~Cell() {}

/** @brief SetCage
  * @param cg nawn
  */
void Cell::SetCage(Cage* cg)
{
	C[TopCage] = cg;
	C[TopCage]->SetCageNum(TopCage);
	TopCage++;
}
/** @brief SetCellTarge
  * @param F Nawn
  */	
void Cell::SetCellTarget(Point* F)
{
	// harusnya ada pengaman tapi aing gatau gimana
	// asumsi F sudah berisi koordinat yang tepat
	pos[F->gety()][F->getx()] = F;
	EmptyPos--;
}
/** @brief SetEntrace
  * @param ent Nawn
  */
void Cell::SetEntrance(Entrance* ent)
{
	if (!adaEntry)
	{
		pos[ent->gety()][ent->getx()] = ent;
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
		pos[ext->gety()][ext->getx()] = ext;
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
void Cel::ViewCage(int NumCage)
{
	C[NumCage]->ShowHewan();
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
/** @brief Lihat Habitat
  * @param rd Nawn
  */
void Cell::SeeHabitat(Point* rd)
{
	Habitat* h = dynamic_cast<Habitat*>(rd);
	C[h->GetCageNum()]->ShowHewan();
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
/** @brief Gerak Kiri
  * @param rd Nawn
  *	@return point setelah pindah
  */
Point* Cell::MoveKiri(Point* rd)
{
	Point* retval = rd;
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
	if (pos[rd->gety()+1][rd->getx()]->isJalan())
	{
		retval = pos[rd->gety()+1][rd->getx()];
	}
	return retval;
}
/** @brief Copy Constructor
  * @param cell&
  */
Cell::Cell(const Cell&);
/** @brief operator=
  * @param cell&
  *	@return cell&
  */
Cell& Cell::operator=(const Cell&);
/** @brief ukuran x
  *	@return size x
  */
int Cell::getsize_x();	//ukuran x cell saat ini
/** @brief ukuran y
  *	@return size y
  */
int Cell::getsize_y();	//ukuran y cell saat ini
/** @brief data di x,y
  * @param x posisi x
  * @param y posisi y
  *	@return point
  */
Point* Cell::getdata(int x,int y)
{
	return(pos[y][x]);
}	//type cell di x dan y
/** @brief set data di x,y
  * @param x posisi x
  * @param y posisi y
  */
void Cell::setdata(int x, int y,Point* t) //set type pada cell x dan y
{
	pos[x][y]=t;
}

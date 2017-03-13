#ifndef CELL_H
#define CELL_H
#include "point.h"
#include "entrance.h"
#include "exit.h"
#include "cage.h"
#include "renderable.h"

class Cell{
	public:
		/** @brief Constructor
		  */
		Cell();
		/** @brief Constructor
		  * @param x ukuran x
		  * @param y ukuran y
		  * @param jumlahkandang
		  */
		Cell(int x, int y, int jumlahkandang);

		/** @brief Destructor
		  */
		virtual ~Cell();

		/** @brief SetCage
		  * @param cg nawn
		  */
		void SetCage(Cage* cg);
		/** @brief SetCellTarge
		  * @param F Nawn
		  */
		void SetCellTarget(Point* F);
		/** @brief SetEntrace
		  * @param ent Nawn
		  */
		void SetEntrance(Entrance* ent);
		/** @brief SetExit
		  * @param ext Nawn
		  */
		void SetExit(Exit* ext);
		/** @brief IsComplete. Semua posisi sudah terisi
		  * @return true jika udah penuh
		  */
		bool IsComplete();
		/** @brief Dapat Jalan masuk
		  * @return Jalan masuk
		  */
		Entrance* GetEntrance();
		/** @brief Dapat Jalan keluar
		  * @return Jalan keluar
		  */
		Exit* GetExit();
		/** @brief Melihatkan kandang
		  * @param nomor kandang
		  */
		void ViewCage(int NumCage);

		/** @brief Gambar tanpa param
		  */
		void Gambar();
		/** @brief Gambar dengan param
		  * @param rd lokasi sekarang
		  */
		void Gambar(Point* rd);
		/** @brief Lihat Habitat
		  * @param rd Nawn
		  */
		void SeeHabitat(Point* rd);
		/** @brief Cek sekitar
		  * @param rd Nawn
		  */
		void CheckSurrounding(Point* rd);
		/** @brief Tour
		  */
		void Tour();
		/** @brief Gerak Kiri
		  * @param rd Nawn
		  *	@return point setelah pindah
		  */
		Point* MoveKiri(Point* rd);
		/** @brief Gerak Kanan
		  * @param rd Nawn
		  *	@return point setelah pindah
		  */
		Point* MoveKanan(Point* rd);
		/** @brief Gerak Atas
		  * @param rd Nawn
		  *	@return point setelah pindah
		  */
		Point* MoveAtas(Point* rd);
		/** @brief Gerak Bawah
		  * @param rd Nawn
		  *	@return point setelah pindah
		  */
		Point* MoveBawah(Point* rd);
		/** @brief Copy Constructor
		  * @param cell&
		  */
		Cell(const Cell&);
		/** @brief operator=
		  * @param cell&
		  *	@return cell&
		  */
		Cell& operator=(const Cell&);
		/** @brief ukuran x
		  *	@return size x
		  */
		int getsize_x();	//ukuran x cell saat ini
		/** @brief ukuran y
		  *	@return size y
		  */
		int getsize_y();	//ukuran y cell saat ini
		/** @brief data di x,y
		  * @param x posisi x
		  * @param y posisi y
		  *	@return point
		  */
		Point* getdata(int x,int y);
		/** @brief set data di x,y
		  * @param x posisi x
		  * @param y posisi y
		  */
		void setdata(int x, int y,Point* t);

		/** @brief Total kebutuhan makanan dalam zoo
		  *	@return jumlah makan
		  */
		int JumlahMakanCell();

	protected:
		/**	ukuran cell x
		  */
		const int size_x;
		/**	ukuran cell y
		  */
		const int size_y;
		/**	type cell
		  */
		Point*** pos;
		/**	Pos yang kosong
		  */
		int EmptyPos;
		/**	Exit
		  */
		Exit* Keluar;
		/**	ada Exit
		  */
		bool adaExit;
		/**	Masuk
		  */
		Entrance* Masuk;
		/**	Ada Masuk
		  */
		bool adaEntry;

    // array of Cage
		/**	Array Kandang
		  */
		Cage** C;
		/**	Nawn
		  */
		int TopCage;
		/**	Ukuran Kandang
		  */
		int SizeCage;

};
#endif

#ifndef CELL_H
#define CELL_H
#include "point.h"

//template <class Point>
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
		}
		Cell(int x, int y):size_x(x),size_y(y)
		{
			//KAMUS
			int i;

			//ALGORITMA
			pos=new Point**[size_y];
			for (i=0;i<size_x;i++)
			{
				pos[i]=new Point*[size_x];
			}	
		}
		~Cell()
		{
		}
		Cell(const Cell&);
		Cell& operator=(const Cell&);
		int getsize_x();	//ukuran x cell saat ini
		int getsize_y();	//ukuran y cell saat ini
		Point getdata(int x,int y);	//type cell di x dan y
		void setdata(int x, int y,Point* t) //set type pada cell x dan y
		{
			pos[x][y]=t;
		}
	protected:
		const int size_x;	//ukuran x cell
		const int size_y;	//ukuran y cell
		Point*** pos;		//type dari cell
};
#endif
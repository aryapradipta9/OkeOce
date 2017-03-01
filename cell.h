#ifndef CELL_H
#define CELL_H

template <class celltype>
class Cell{
	public:
		Cell();
		Cell(int size_x, int size_y);
		~Cell();
		Cell(const Cell<celltype>&);
		Cell<celltype>& operator=(const Cell<celltype>&);
		int getsize_x();	//ukuran x cell saat ini
		int getsize_y();	//ukuran y cell saat ini
		celltype getdata(int x,int y);	//type cell di x dan y
		void setdata(int x, int y,celltype t); //set type pada cell x dan y
	protected:
		const int size_x;	//ukuran x cell
		const int size_y;	//ukuran y cell
		celltype** pos;		//type dari cell
};
#endif
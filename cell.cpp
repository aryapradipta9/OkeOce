#ifndef CELL_H
#define CELL_H

template <class celltype>
class Cell{
	public:
		Cell() : size_x(50), size_y(50)
		{
			pos = new celltype* [size_x];
			for (int i = 0; i < size_y; i++)
			 	pos[i] = new celltype [size_y];
		}
		Cell(int size_x, int size_y);
		~Cell()
		{
			for (int i = 0; i < size_y; i++)
				delete [] pos[i];
			delete [] pos;
		}
		Cell(const Cell<celltype>&);
		Cell<celltype>& operator=(const Cell<celltype>&);
		int getsize_x();	//ukuran x cell saat ini
		int getsize_y();	//ukuran y cell saat ini
		celltype getdata(int x,int y)
		{
			return(pos[x][y]);
		}	//type cell di x dan y
		void setdata(int x, int y,celltype t)
		{
			pos[x][y] = t;
		} //set type pada cell x dan y
	protected:
		const int size_x;	//ukuran x cell
		const int size_y;	//ukuran y cell
		celltype** pos;		//type dari cell
};
#endif

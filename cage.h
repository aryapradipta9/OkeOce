#ifndef CAGE_H
#define CAGE_H

template <class htype>
class Cage{
	public:
		Cage();
		Cage(int size_x, int size_y);
		~Cage();
		Cage(const Cell<celltype>&);
		Cage<htype>& operator=(const Cage<htype>&);
		int getsize_x();	//ukuran x cell saat ini
		int getsize_y();	//ukuran y cell saat ini
		htype gethabitat(int x,int y);	//type cell di x dan y
		void sethabitat(int x, int y,htype t); //set type pada cell x dan y
	protected:
		const int size_x;	//ukuran x cell
		const int size_y;	//ukuran y cell
		htype type;		//type dari cell
};
#endif
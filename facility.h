#ifndef FACILITY_H
#define FACILITY_H

template <class ftype>
class Facility{
	public:
		int get_x();	//dapat x
		int get_y();	//dapat y
		ftype getdata(int x,int y);	//type cell di x dan y
		void setdata(int x, int y,ftype t); //set type pada cell x dan y
	protected:
		int x;	//lokasi x
		int y;	//lokasi y
		ftype type;		//type dari facility
};
#endif
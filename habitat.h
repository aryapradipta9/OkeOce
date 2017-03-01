#ifndef HABITAT_H
#define HABITAT_H

template <class htype>
class Habitat{
	public:
		int get_x();	//dapat x
		int get_y();	//dapat y
		htype getdata(int x,int y);	//type cell di x dan y
		void setdata(int x, int y,htype h); //set type pada cell x dan y
	protected:
		int x;	//lokasi x
		int y;	//lokasi y
		htype type;		//type dari facility
};
#endif
#ifndef ROAD_H
#define ROAD_H

template <class rtype>
class Road{
	public:
		bool path_down();
		bool path_right();
		bool path_left();
		bool path_up();
		rtype getdata(int x,int y);	//type cell di x dan y
		void setdata(int x, int y,rtype t); //set type pada cell x dan y
	protected:
		int NextPath;
		int PrevPath;
		const int NullPath=0;
		ftype type;		//type dari facility
};
#endif
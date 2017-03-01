#ifndef WATERHABITAT_H
#define WATERHABITAT_H

template <class atype>
class WaterHabitat{
	public:
		atype getanimal(int x,int y);	//type cell di x dan y
		void setanimal(int x, int y,atype a); //set type pada cell x dan y
	protected:
		atype type;		//type dari facility
};
#endif
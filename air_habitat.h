#ifndef AIRHABITAT_H
#define AIRHABITAT_H

template <class atype>
class AirHabitat{
	public:
		atype getanimal(int x,int y);	//type cell di x dan y
		void setanimal(int x, int y,atype a); //set type pada cell x dan y
	protected:
		atype type;		//type dari facility
};
#endif
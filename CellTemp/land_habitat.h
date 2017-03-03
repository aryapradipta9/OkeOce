#ifndef LANDHABITAT_H
#define LANDHABITAT_H

template <class atype>
class LandHabitat{
	public:
		LandHabitat();//ctor
		LandHabitat(Animal _ani)
		{
			ani = _ani;
		}
		~LandHabitat();//dtor
		Animal getanimal(int x,int y);	//type cell di x dan y
		void setanimal(int x, int y,atype a); //set type pada cell x dan y
	protected:
		Animal ani;		//type dari facility
};
#endif

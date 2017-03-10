#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
class Animal{
	public:
		Animal()
		{
			Type = new int[3];
		}
		virtual ~Animal()
		{
			delete [] Type;
		}
		virtual void GetExperience()
		{
			cout << "Hewan ini tinggal di : ";
			if (Type[0]==1) cout << "darat ";
			if (Type[1]==1) cout << "udara ";
			if (Type[2]==1) cout << "air ";
			cout << endl;
			cout << "Hewan ini tergabung di famili "<< Famili << "dan dengan nama spesies "<< Species << endl;
			cout << Experience << endl;
		}
		virtual int GetFoodNum(){}
		//atype getanimal(int x,int y);	//type cell di x dan y
		//void setanimal(int x, int y,atype a); //set type pada cell x dan y
	protected:
		int* Type; // 0 : darat, 1 : udara, 2 : air
		string Famili;
		string Species;
		string Experience;//type dari facility
		short JenisMakanan; // 1 : herbifor, 2 : karnivor, 3 : omnifor
	  int Berat;
	  string Makanan;
};
#endif

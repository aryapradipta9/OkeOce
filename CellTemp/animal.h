#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
class Animal{
	public:
		Animal(){}
		virtual void GetExperience()
		{
			cout << Type << endl;
			cout << Famili << endl;
			cout << Species << endl;
			cout << Experience << endl;
		}
		//atype getanimal(int x,int y);	//type cell di x dan y
		//void setanimal(int x, int y,atype a); //set type pada cell x dan y
	protected:
		string Type;
		string Famili;
		string Species;
		string Experience;//type dari facility
};
#endif

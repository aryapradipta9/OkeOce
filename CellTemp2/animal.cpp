#include <string>
#include <iostream>
#include "animal.h"

/** @brief Constructor
  */
Animal::Animal()
{
	Type = new int[3];
}
/** @brief Destructor
  */
virtual Animal::~Animal()
{
	delete [] Type;
}
/** @brief Komunikasi dengan hewan
  */
virtual void Animal::GetExperience()
{
	cout << "Hewan ini tinggal di : ";
	if (Type[0]==1) cout << "darat ";
	if (Type[1]==1) cout << "udara ";
	if (Type[2]==1) cout << "air ";
	cout << endl;
	cout << "Hewan ini tergabung di famili "<< Famili << "dan dengan nama spesies "<< Species << endl;
	cout << Experience << endl;
}
/** @brief Jumlah makanan
  *	@return Jumlah makanan
  */
virtual int Animal::GetFoodNum()
{

}

/** @brief Constructor
  * @return render(?)
  */
virtual char Animal::GetRender()
{

}
		
//atype getanimal(int x,int y);	//type cell di x dan y
//void setanimal(int x, int y,atype a); //set type pada cell x dan y

#include <iostream>
#include "cell.h"
#include "point.h"
#include "facility.h"
#include "road.h"
using namespace std;

int main()
{
	int i,j;
	//Point P;
	Cell A(50,50);
	//Point P;

	//P=new(Facility());

	for(i=0;i<50;i++)
	{
		for(j=0;j<50;j++)
		{
			A.setdata(i,j,new Facility(i,j));
		}
	}
	return 0;
};

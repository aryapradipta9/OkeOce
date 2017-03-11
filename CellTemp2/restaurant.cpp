#include "restaurant.h"
using namespace std;

Restaurant::Restaurant(int posx, int posy) : Facility(posx,posy){};

void Restaurant::render(char** cc)
{
	cc[Point::y][Point::x] = 'R';
}

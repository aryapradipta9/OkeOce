#include "park.h"
using namespace std;

Park::Park(int posx, int posy) : Facility(posx,posy){};

void Park::render(char** cc)
{
	cc[Point::y][Point::x] = 'R';
}

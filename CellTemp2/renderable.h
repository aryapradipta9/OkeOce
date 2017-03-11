#ifndef RENDERABLE_H
#define RENDERABLE_H

class Renderable
{
public:
	/**	@brief Kelas virtual render
	  * @param cc matriks yang akan diprint
	  */
	virtual void render(char** cc);
};
#endif

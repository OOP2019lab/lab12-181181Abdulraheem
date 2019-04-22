#include "triangle.h"

triangle::triangle(float lambayi , float chorayi , string rang):shape(rang)
{
	height = lambayi;
	base = chorayi;
}




float triangle::area()
{
	return (base*height)/2;

}
triangle::~triangle(){ cout << "~ triangle () called."<<endl;   }




#include "rectangle.h"

float rectangle:: area()
{
	return height*width;
}

rectangle::rectangle (float lambayi ,float chorayi , string rang):shape(rang)
{
	height = lambayi;
	width = chorayi;

}

rectangle::~rectangle(){ cout << "~rectangle() called."<<endl;   }

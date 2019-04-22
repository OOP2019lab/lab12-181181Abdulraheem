#include "shape.h"

float shape:: area()
{
	return 0.0;

}
shape::shape(string rang)
{
	color = rang;
}

shape::~shape(){ cout << "~shape() called."<<endl; 	}

#include "circle.h"

circle::circle(float radaas, string rang):shape(rang)
{
	radius = radaas;
}

float circle::area()
{
	return 3.14*radius*radius;

}
circle::~circle() { cout << "~ circle () called."<<endl;  	}


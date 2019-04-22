#include "shape.h"
#pragma once
class rectangle:public shape
{
	float height;
	float width;


public:
	float area();
	rectangle(float ,float ,string);
	~rectangle();
};


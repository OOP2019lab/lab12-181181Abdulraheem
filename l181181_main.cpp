// lab12.cpp : Defines the entry point for the console application.
//

#include "Circle.h"
#include "Rectangle.h"
#include "shape.h"
#include "triangle.h"
#include <string>
#include <conio.h>

float sumArea(shape* shape1,shape* shape2)
{
	return shape1-> area() + shape2 -> area();


}




int main()
{
	triangle t1(1.0,9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area()<<endl;
	cout<< t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;

	shape *sptr1= &t1;
	shape &sref=r1;
	cout<< sptr1->area()<<endl;
	cout << sptr1->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;


	/* output without including virtual as keyword
	4.5
	Red
	12.56
	12
	0
	Red
	Orange
	0
	*/
	cout << "----------------------\n\n\n";


	shape s1("Purple");

	cout<<sumArea(&t1,&c1) << endl;
	cout<<sumArea(&s1,&r1) << endl;
	cout<<sumArea(&s1,&t1) << endl;

	cout << "************************\n\n\n";
	shape **arr = new shape*[5];
	int count = 5;
	int a;
	int b ;
	string c;
	for(int i=0; i<count ;)
	{
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		switch (_getch())
		{

		case '1':
			{	
				cout << "Height = " < cin >> a; 
				cout << "Width = " < cin >> b; 
				cout << "Colour = " < cin >> c;
				arr[i] = new triangle (a,b,c);

				i++;
				break;
			}
		case '2':
			{	 
				cout << "Height = " < cin >> a; 
				cout << "Width = " < cin >> b; 
				cout << "Colour = " < cin >> c;
				arr[i] = new rectangle (a,b,c);
				i++;
				break;
			}
		case '3':
			{	 cout << "Radius = " < cin >> a; 
			cout << "Colour = " < cin >> c;
			arr[i] = new circle(a,c);
			i++;
			break;
			}
		default:
			cout<<"Invalid input. Enter again." <<endl<<endl;

		}
	}


	for (int i = 0 ; i < count ; i++)
	{
		cout << "Area of " << i + 1 << " shape = ";
		cout << arr[i]->area() << endl;
	}



	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n\n";
	shape *ss= new triangle(1.0,9.0, "Red");// constructor of triangle invoked
	delete ss; //identify which destructor in invoked
	return 0;
}
#include "Point.h"
#include "Shape.h"

int main() {
	/*Point pt1(7, 7), pt2(3, 100);
	//pt._x = 100;
	//pt._y = 200;

	Point pt3 = pt1;
	pt3.Print();

	pt3 = pt2;
	pt3.Print();
	*/
	/*
	Point pt(50, 50);
	Point delta(100, 100);

	pt.Offset(10, -10);
	pt.Print();
	pt.Offset(delta);

	pt.Print(); */ 
	/*Point pt1(40, 50), pt2(60, 70);
	cout << "pt1 : "<<pt1.toString()<<endl;
	cout << "pt2 : "<<pt2.toString() << endl;

	Point pt3 = pt1 + pt2;
	cout << "pt3 : "<<pt3.toString() << endl;*/
	Point pt(30, 30);

	Shape s1;
	Shape s2(10, 20);
	Shape s3(pt);

	s1.Draw();
	s2.Draw();
	s3.Draw();

	return 0;
}
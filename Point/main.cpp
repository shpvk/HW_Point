#include<iostream>
#include "Point.h"
using namespace std;


//глобальная перегрузка
Point operator+ (int a, Point& obj)
{
    Point sum(a + obj.GetX(), a + obj.GetY());
    return sum;
}


Point operator++ (Point& obj)
{
	Point rez(obj.GetX(), obj.GetY());

	obj.SetX(obj.GetX() + 1);
	obj.SetY(obj.GetY() + 1);
	return rez;
}

Point operator-- (Point& obj)
{
	Point rez(obj.GetX(), obj.GetY());

	obj.SetX(obj.GetX() - 1);
	obj.SetY(obj.GetY() - 1);
	return rez;
}

Point operator*= (Point& obj, int x)
{
	

	obj.SetX( obj.GetX() * x);
	obj.SetY( obj.GetY() * x);

	Point rez	(obj.GetX(), obj.GetY());
	return rez;
}


Point operator+= (Point& obj, int x)
{
	

	obj.SetX( obj.GetX() + x);
	obj.SetY( obj.GetY() + x);

	Point rez	(obj.GetX(), obj.GetY());
	return rez;
}

Point operator-= (Point& obj, int x)
{
	

	obj.SetX( obj.GetX() - x);
	obj.SetY( obj.GetY() - x);

	Point rez	(obj.GetX(), obj.GetY());
	return rez;
}


int main()
{
	Point a(1, 2);
	//Point sum = a.operator+(b); // a + b;
	//std::cout << ++a.x << std::endl;
	//std::cout << a.x << std::endl;


	// Point b;
	// b = 10 + a;
	// ++b;
	// b.Print();
	a *= 5;
	a.Print();

	a += 5;
	a.Print();
	/*
	a -= b;
	a *= b;
	a += 100;
	a -= 3;
	a *= 5;
	*/
}
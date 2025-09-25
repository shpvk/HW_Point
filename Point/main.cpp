#include<iostream>
#include "Point.h"
using namespace std;

Point operator+ (int a, Point& obj)
{
    Point sum(a + obj.GetX(), a + obj.GetY());
    return sum;
}

int main()
{
	Point a(1, 2);
	//Point sum = a.operator+(b); // a + b;
	std::cout << ++a.x << std::endl;
	std::cout << a.x << std::endl;

}
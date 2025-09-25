#include "Point.h" // ���� ����������
#include<iostream>
using namespace std;


Point Point::operator-- ()
{
	x--;
	y--;
	return *this;
}

Point Point::operator++ ()
{
	x++;
	y++;
	return *this;
}

Point Point::operator++ (int)
{
	Point temp(x,y);
	++x;
	++y;
	return temp;
}

Point Point::operator+ (Point& b)
{
	return Point(x + b.x, y + b.y);
}

Point Point::operator- (Point& b)
{
	return Point(x - b.x, y - b.y);
}

Point Point::operator* (Point& b)
{
	return Point(x * b.x, y * b.y);
}

Point Point::operator/ (Point& b)
{
	return Point(x / b.x, y / b.y);
}

Point::Point()
{
	x = 0;
	y = 0;
	cout << "Construct by default\n";
}
Point::Point(int a, int b)
{
	x = a;
	y = b;
	cout << "Construct by 2 params\n";
}
void Point::Init(int a, int b)
{
	x = a;
	y = b;
}
void Point::Init()
{
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
}
void Point::Print()
{
	cout << "X: " << x << "\tY: " << y << endl;
}

int Point::count = 0; // ��������� ������������� ������ ����
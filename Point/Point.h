#pragma once// ���� �������
class Point
{ 
public:
	// ���������� ������
	int x;
	int y;
public:// ��������� ������, ��������� �������
	Point();
	Point(int a, int b);
	void Init(int a, int b);
	void Init();  // ���� � ����������
	void Print();
	Point operator+ (Point& b);
	Point operator- (Point& b);
	Point operator* (Point& b);
	Point operator/ (Point& b);

	Point operator++ ();
	Point operator++ (int);

	Point operator-- ();
	Point operator+= ();

	static int count; // ������� ����������� ����
};


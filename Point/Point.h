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

	// Point operator++ ();
	// Point operator++ (int);

	// Point operator-- ();
	//Point operator+= ();

	int GetX();
	int GetY();

	void SetX(int x);
	void SetY(int y);

	static int count; // ������� ����������� ����
};


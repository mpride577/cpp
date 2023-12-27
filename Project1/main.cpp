#include <iostream>
#include <string>
#include <functional>

using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Point operator + (Point& p2)
	{
		return Point((x + p2.x), (y + p2.y));
	}
	Point operator * (Point& p2)
	{
		return Point((x * p2.x), (y * p2.y));
	}
	Point operator - (int num)
	{
		return Point((x - num), (y - num));
	}
	void operator += (int num2)
	{
		x += num2; 
		y += num2;
	}
	void operator ++ (int num3)
	{
		x++;
		y++;
	}
	bool operator == (Point& p2)
	{
		return x == p2.x && y == p2.y;
	}

	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
};



int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	Point first(6, 7), second(7, 4);
	Point third = first - 5;
	third++;

	//cout << third.get_x() << " - " << third.get_y() << endl;

	cout << (third == first) << endl;

	int a = 10;
	cout << a << endl;


	return 0;
}
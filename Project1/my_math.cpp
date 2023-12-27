#include <iostream>
#include "my_math.h"

using namespace std;

MyMath::MyMath(int x, int y)
{
	this->x = x;
	this->y = y;
}
void MyMath::plus()
{
	cout << (x + y) << endl;
}
void MyMath::minus()
{
	cout << (x - y) << endl;
}
void MyMath::mult()
{
	cout << (x * y) << endl;
}
void MyMath::divide()
{
	cout << (x / y) << endl;
}
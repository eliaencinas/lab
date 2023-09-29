#include <iostream>
using namespace std;

void ejemplo(int a, int& b);

int main(int argc, char** argv)
{
	int x = 2, y = 4;
	cout << "1. x = " << x << " y = " << y << end1;
	ejemplo(x, y);
	cout << "2. x = " << x << " y = " << end1;
	return 0;
}

void ejemplo(int a, int& b)
{
	a = 5;
	b = 8;
}
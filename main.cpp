#include <iostream>	
using namespace std;

void func();

int a = 0;

int main()
{
	int b = 1;

	cout << "main�֐��ł�\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	func();

	return 0;
}

void func()
{
	int c = 2;

	cout << "func�֐��ł�\n";
	cout << "a = " << a << "\n";
	cout << "c = " << c << "\n";
}
#include <iostream>	
using namespace std;

void func();

int a = 0;

int main()
{
	int b = 1;

	cout << "mainŠÖ”‚Å‚Í\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	func();

	return 0;
}

void func()
{
	int c = 2;

	cout << "funcŠÖ”‚Å‚Í\n";
	cout << "a = " << a << "\n";
	cout << "c = " << c << "\n";
}
#include <iostream>	
using namespace std;

int main()
{
	cout << "short int型のサイズは " << sizeof(short int) << " バイトです。\n";
	cout << "int型のサイズは " << sizeof(int) << " バイトです。\n";
	cout << "long int型のサイズは " << sizeof(long int) << " バイトです。\n";
	cout << "float型のサイズは " << sizeof(float) << " バイトです。\n";
	cout << "double型のサイズは " << sizeof(double) << " バイトです。\n";
	cout << "long double型のサイズは " << sizeof(long double) << " バイトです。\n";

	return 0;
}
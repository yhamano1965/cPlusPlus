#include <iostream>	
using namespace std;

int main()
{
	int test[] = { 80, 60, 55, 22, 75 };

	cout << "test[0]�̒l�� " << test[0] << " �ł��B\n";
	cout << "test[0]�̃A�h���X�� " << &test[0] << " �ł��B\n";
	cout << "test�̒l�� " << test << " �ł��B\n";
	cout << "*test�̒l�� " << *test << " �ł��B\n\n";

	cout << "test[1]�̒l�� " << test[1] << " �ł��B\n";
	cout << "test[1]�̃A�h���X�� " << &test[1] << " �ł��B\n";
	cout << "test+1�̒l�� " << test+1 << " �ł��B\n";
	cout << "*(test+1)�̒l�� " << *(test+1) << " �ł��B\n\n";

	return 0;
}
#include <iostream>	
using namespace std;

int main()
{
	int test[] = { 80, 60, 55, 22, 75 };

	cout << "test[0]の値は " << test[0] << " です。\n";
	cout << "test[0]のアドレスは " << &test[0] << " です。\n";
	cout << "testの値は " << test << " です。\n";
	cout << "*testの値は " << *test << " です。\n\n";

	cout << "test[1]の値は " << test[1] << " です。\n";
	cout << "test[1]のアドレスは " << &test[1] << " です。\n";
	cout << "test+1の値は " << test+1 << " です。\n";
	cout << "*(test+1)の値は " << *(test+1) << " です。\n\n";

	return 0;
}
#include <iostream>	
using namespace std;

int main()
{
	int a = 5;
	int& rA = a;

	cout << "�ϐ�a�̒l�� " << a << " �ł��B\n";
	cout << "�Q��rA�̒l�� " << rA << " �ł��B\n";
	cout << "�ϐ�a�̃A�h���X�� " << &a << " �ł��B\n";
	cout << "�Q��rA�̒l�� " << &rA << " �ł��B\n\n";

	rA = 50;

	cout << "\n�Q��rA��50�������܂����B\n\n";

	cout << "�ϐ�a�̒l�� " << a << " �ł��B\n";
	cout << "�Q��rA�̒l�� " << rA << " �ł��B\n";
	cout << "�ϐ�a�̃A�h���X�� " << &a << " �ł��B\n";
	cout << "�Q��rA�̒l�� " << &rA << " �ł��B\n\n";

	return 0;
}
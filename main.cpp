#include <iostream>	
using namespace std;

int main()
{
	int a;
	int* pA;

	a = 5;
	pA = &a;

	cout << "�ϐ�a�̒l�� " << a << " �ł��B\n";
	cout << "�ϐ�a�̃A�h���X�� " << &a << " �ł��B\n";
	cout << "�|�C���^pA�̒l�� " << pA << " �ł��B\n";
	cout << "*pA�̒l�� " << *pA << " �ł��B\n";

	return 0;
}
#include <iostream>	
using namespace std;

int main()
{
	int a = 5;
	int b = 10;
	int* pA;

	pA = &a;

	cout << "�ϐ�a�̒l�� " << a << " �ł��B\n";
	cout << "�ϐ�a�̃A�h���X�� " << &a << " �ł��B\n";
	cout << "�|�C���^pA�̒l�� " << pA << " �ł��B\n";
	cout << "*pA�̒l�� " << *pA << " �ł��B\n\n";

	pA = &b;

	cout << "�ϐ�b�̒l�� " << b << " �ł��B\n";
	cout << "�ϐ�b�̃A�h���X�� " << &b << " �ł��B\n";
	cout << "�|�C���^pA�̒l�� " << pA << " �ł��B\n";
	cout << "*pA�̒l�� " << *pA << " �ł��B\n\n";

	return 0;
}
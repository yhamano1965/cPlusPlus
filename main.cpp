#include <iostream>
#include "swap.h"
using namespace std;

int main()
{
	int num1 = 5;
	int num2 = 10;

	cout << "�ϐ�num1�̒l�� " << num1 << " �ł��B\n";
	cout << "�ϐ�num2�̒l�� " << num2 << " �ł��B\n";
	cout << "\n�ϐ�num1�ƕϐ�num2�̒l���������܂��B\n\n";

	swap(&num1, &num2);

	cout << "�ϐ�num1�̒l�� " << num1 << " �ł��B\n";
	cout << "�ϐ�num2�̒l�� " << num2 << " �ł��B\n";

	return 0;
}
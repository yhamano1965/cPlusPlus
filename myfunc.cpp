#include <iostream>	
#include "myfunc.h"
using namespace std;

void Car::show()
{
	cout << "�Ԃ̃i���o�[��" << num << "�F�K�\�����ʂ�" << gas << "�ł��B\n";
}

void Car::setNumGas(int n, double g)
{
	if (g > 0 && g < 1000)
	{
		num = n;
		gas = g;
		cout << "�Ԃ̃i���o�[��" << num << "�ɃK�\�����ʂ�" << gas << "�ɂ��܂����B\n";
	}
	else
	{
		cout << g << "�͐������K�\�����ʂł͂���܂���B\n";
		cout << "�K�\�����ʂ�ύX�ł��܂���ł����B\n";
	}
}
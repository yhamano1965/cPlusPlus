#include <iostream>	
#include "myfunc.h"
using namespace std;

int Car::sum = 0;

Car::Car()
{
	num = 0;
	gas = 0.0;
	sum++;
	cout << "�Ԃ��쐬���܂����B\n";
}

void Car::showSum()
{
	cout << "�Ԃ͑S����" << sum << "�䂠��܂��B\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "�i���o�[��" << num << "�ɃK�\�����ʂ�" << gas << "�ɂ��܂����B\n";
}

void Car::show()
{
	cout << "�Ԃ̃i���o�[��" << num << "�F�K�\�����ʂ�" << gas << "�ł��B\n";
}
#include <iostream>
#include "car.h"
#include "rccar.h"
using namespace std;

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "�Ԃ��쐬���܂����B(Car::Constractor(1))\n";
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "�i���o�[" << num << "�K�\������" << gas << "�̎Ԃ��쐬���܂����B(Car::Constractor(2))\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "�i���o�[��" << num << "�ɃK�\�����ʂ�" << gas << "�ɂ��܂����B(Car::setCar)\n";
}

void Car::show()
{
	cout << "�Ԃ̃i���o�[��" << num << "�ł��B(Car::show)\n";
	cout << "�K�\�����ʂ�" << gas << "�ł��B(Car::show)\n";
}
#include <iostream>	
#include "vehicle.h"
#include "car.h"
#include "plane.h"
using namespace std;

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "�i���o�[" << num << "�K�\������" << gas << "�̎Ԃ��쐬���܂����B(Car::Constractor)\n";
}

void Car::show()
{
	cout << "�Ԃ̃i���o�[��" << num << "�ł��B(Car::show)\n";
	cout << "�K�\�����ʂ�" << gas << "�ł��B(Car::show)\n";
	cout << "���x��" << speed << "�ł��B(Car::show)\n";
}
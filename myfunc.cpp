#include <iostream>	
#include "myfunc.h"
using namespace std;

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "�Ԃ��쐬���܂����B\n";
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

RacingCar::RacingCar()
{
	course = 0;
	cout << "���[�V���O�J�[���쐬���܂����B\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "�R�[�X�ԍ���" << course << "�ɂ��܂����B\n";
}

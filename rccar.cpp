#include <iostream>	
#include "car.h"
#include "rccar.h"
using namespace std;

RacingCar::RacingCar() : Car()
{
	course = 0;
	cout << "���[�V���O�J�[���쐬���܂����B(RacingCar::Constractor(1))\n";
}

RacingCar::RacingCar(int n, double g, int c) : Car(n, g)
{
	course = c;
	cout << "�R�[�X�ԍ�" << course << "�̃��[�V���O�J�[���쐬���܂����B(RacingCar::Constractor(2))\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "�R�[�X�ԍ���" << course << "�ɂ��܂����B(RacingCar::setCourse)\n";
}

void RacingCar::show()
{
	cout << "�Ԃ̃i���o�[��" << num << "�ł��B(RacingCar::show)\n";
	cout << "�K�\�����ʂ�" << gas << "�ł��B(RacingCar::show)\n";
	cout << "�R�[�X�ԍ���" << course << "�ł��B(RacingCar::show)\n";
}
#include <iostream>	
#include "car.h"
#include "rccar.h"
using namespace std;

RacingCar::RacingCar() : Car()
{
	course = 0;
	cout << "���[�V���O�J�[���쐬���܂����B\n";
}

RacingCar::RacingCar(int n, double g, int c) : Car(n, g)
{
	course = c;
	cout << "�R�[�X�ԍ�" << course << "�̃��[�V���O�J�[���쐬���܂����B\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "�R�[�X�ԍ���" << course << "�ɂ��܂����B\n";
}
#include <iostream>	
#include "myfunc.h"
using namespace std;

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "�i���o�[" << num << "�K�\������" << gas << "�̎Ԃ��쐬���܂����B\n";
}

void Car::show()
{
	cout << "�Ԃ̃i���o�[��" << num << "�F�K�\�����ʂ�" << gas << "�ł��B\n";
}
#include <iostream>	
#include "myfunc.h"
using namespace std;

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "�Ԃ��쐬���܂����B\n";
}

void Car::show()
{
	cout << "�Ԃ̃i���o�[��" << num << "�F�K�\�����ʂ�" << gas << "�ł��B\n";
}
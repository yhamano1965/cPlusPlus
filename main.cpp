#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car car1 = {1234, 25.5};
	Car car2 = {4567, 52.2};

	cout << "car1�̃i���o�[��" << car1.num << "�F�K�\�����ʂ�" << car1.gas << "�ł��B\n";
	cout << "car2�̃i���o�[��" << car2.num << "�F�K�\�����ʂ�" << car2.gas << "�ł��B\n";

	car2 = car1;

	cout << "car1��car2�ɑ�����܂����B\n";
	cout << "car2�̃i���o�[��" << car2.num << "�F�K�\�����ʂ�" << car2.gas << "�ł��B\n";


	return 0;
}
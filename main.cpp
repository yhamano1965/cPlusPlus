#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car car1;

	cout << "�i���o�[�́H\n";
	cin >> car1.num;

	cout << "�K�\�����ʂ́H\n";
	cin >> car1.gas;

	cout << "�Ԃ̃i���o�[��" << car1.num << "�F�K�\�����ʂ�" << car1.gas << "�ł��B\n";

	return 0;
}
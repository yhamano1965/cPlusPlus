#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car car1 = {0, 0.0};

	show(car1);

	cout << "�i���o�[�́H\n";
	cin >> car1.num;

	cout << "�K�\�����ʂ́H\n";
	cin >> car1.gas;

	show(car1);

	return 0;
}
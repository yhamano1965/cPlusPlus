#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car car1 = {0, 0.0};

	show(car1);

	cout << "ナンバーは？\n";
	cin >> car1.num;

	cout << "ガソリン量は？\n";
	cin >> car1.gas;

	show(car1);

	return 0;
}
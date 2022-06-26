#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car car1 = {1234, 25.5};
	Car car2 = {4567, 52.2};

	cout << "car1のナンバーは" << car1.num << "：ガソリン量は" << car1.gas << "です。\n";
	cout << "car2のナンバーは" << car2.num << "：ガソリン量は" << car2.gas << "です。\n";

	car2 = car1;

	cout << "car1をcar2に代入しました。\n";
	cout << "car2のナンバーは" << car2.num << "：ガソリン量は" << car2.gas << "です。\n";


	return 0;
}
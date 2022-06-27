#include <iostream>	
#include "myfunc.h"
using namespace std;

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "車を作成しました。\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "：ガソリン量は" << gas << "です。\n";
}
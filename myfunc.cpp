#include <iostream>	
#include "myfunc.h"
using namespace std;

int Car::sum = 0;

Car::Car()
{
	num = 0;
	gas = 0.0;
	sum++;
	cout << "車を作成しました。\n";
}

void Car::showSum()
{
	cout << "車は全部で" << sum << "台あります。\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバーを" << num << "にガソリン量を" << gas << "にしました。\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "：ガソリン量は" << gas << "です。\n";
}
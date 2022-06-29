#include <iostream>	
#include "myfunc.h"
using namespace std;

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "車を作成しました。\n";
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

RacingCar::RacingCar()
{
	course = 0;
	cout << "レーシングカーを作成しました。\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "コース番号を" << course << "にしました。\n";
}

#include <iostream>
#include "car.h"
#include "rccar.h"
using namespace std;

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "車を作成しました。(Car::Constractor(1))\n";
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました。(Car::Constractor(2))\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバーを" << num << "にガソリン量を" << gas << "にしました。(Car::setCar)\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "です。(Car::show)\n";
	cout << "ガソリン量は" << gas << "です。(Car::show)\n";
}
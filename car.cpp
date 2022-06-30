#include <iostream>	
#include "vehicle.h"
#include "car.h"
#include "plane.h"
using namespace std;

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました。(Car::Constractor)\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "です。(Car::show)\n";
	cout << "ガソリン量は" << gas << "です。(Car::show)\n";
	cout << "速度は" << speed << "です。(Car::show)\n";
}
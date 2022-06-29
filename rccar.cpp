#include <iostream>	
#include "car.h"
#include "rccar.h"
using namespace std;

RacingCar::RacingCar() : Car()
{
	course = 0;
	cout << "レーシングカーを作成しました。\n";
}

RacingCar::RacingCar(int n, double g, int c) : Car(n, g)
{
	course = c;
	cout << "コース番号" << course << "のレーシングカーを作成しました。\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "コース番号を" << course << "にしました。\n";
}
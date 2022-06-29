#include <iostream>	
#include "car.h"
#include "rccar.h"
using namespace std;

RacingCar::RacingCar() : Car()
{
	course = 0;
	cout << "レーシングカーを作成しました。(RacingCar::Constractor(1))\n";
}

RacingCar::RacingCar(int n, double g, int c) : Car(n, g)
{
	course = c;
	cout << "コース番号" << course << "のレーシングカーを作成しました。(RacingCar::Constractor(2))\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "コース番号を" << course << "にしました。(RacingCar::setCourse)\n";
}

void RacingCar::show()
{
	cout << "車のナンバーは" << num << "です。(RacingCar::show)\n";
	cout << "ガソリン量は" << gas << "です。(RacingCar::show)\n";
	cout << "コース番号は" << course << "です。(RacingCar::show)\n";
}
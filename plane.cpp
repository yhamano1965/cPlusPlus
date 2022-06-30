#include <iostream>	
#include "vehicle.h"
#include "car.h"
#include "plane.h"
using namespace std;

Plane::Plane(int f)
{
	flight = f;
	cout << "便" << flight << "の飛行機を作成しました。(Plane::Constractor)\n";
}

void Plane::show()
{
	cout << "便は" << flight << "です。(Plane::show)\n";
	cout << "速度は" << speed << "です。(Plane::show)\n";
}

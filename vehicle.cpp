#include <iostream>	
#include "vehicle.h"
#include "car.h"
#include "plane.h"
using namespace std;

void Vehicle::setSpeed(int s)
{
	speed = s;
	cout << "速度を" << speed << "にしました。(Vehicle::setSpeed)\n";
}
#include <iostream>	
#include "vehicle.h"
#include "car.h"
#include "plane.h"
using namespace std;

void Vehicle::setSpeed(int s)
{
	speed = s;
	cout << "‘¬“x‚ð" << speed << "‚É‚µ‚Ü‚µ‚½B(Vehicle::setSpeed)\n";
}
#include <iostream>	
#include "vehicle.h"
#include "car.h"
#include "plane.h"
using namespace std;

void Vehicle::setSpeed(int s)
{
	speed = s;
	cout << "���x��" << speed << "�ɂ��܂����B(Vehicle::setSpeed)\n";
}
#include <iostream>	
#include "vehicle.h"
#include "car.h"
#include "plane.h"
using namespace std;

Plane::Plane(int f)
{
	flight = f;
	cout << "��" << flight << "�̔�s�@���쐬���܂����B(Plane::Constractor)\n";
}

void Plane::show()
{
	cout << "�ւ�" << flight << "�ł��B(Plane::show)\n";
	cout << "���x��" << speed << "�ł��B(Plane::show)\n";
}

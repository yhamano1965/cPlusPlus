#include <iostream>	
#include "vehicle.h"
#include "car.h"
#include "plane.h"
using namespace std;

int main()
{
	Vehicle* pVc[2];

	Car car1(1234, 20.5);
	pVc[0] = &car1;
	pVc[0]->setSpeed(60);

	Plane pln1(232);
	pVc[1] = &pln1;
	pVc[1]->setSpeed(500);

	for (int i = 0; i < 2; i++)
	{
		pVc[i]->show();
	}

	return 0;
}
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
	cout << typeid(*pVc[0]).name() << "‚Å‚·B\n\n";

	Plane pln1(232);
	pVc[1] = &pln1;
	pVc[1]->setSpeed(500);
	cout << typeid(*pVc[1]).name() << "‚Å‚·B\n\n";

	return 0;
}
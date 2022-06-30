#include <iostream>	
#include "car.h"
#include "rccar.h"
using namespace std;

int main()
{
	Car* pCars[2];

	Car car1;
	RacingCar rccar1;

	pCars[0] = &car1;
	pCars[0]->setCar(1234, 20.5);

	pCars[1] = &rccar1;
	pCars[1]->setCar(4567, 30.5);

	for (int i = 0; i < 2; i++)
	{
		pCars[i]->show();
	}

	return 0;
}
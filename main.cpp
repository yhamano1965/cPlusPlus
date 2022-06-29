#include <iostream>	
#include "car.h"
#include "rccar.h"
using namespace std;

int main()
{
	RacingCar rccar1;
	rccar1.setCar(1234, 20.5);
	rccar1.setCourse(5);
	rccar1.show();

	RacingCar rccar2(4567, 50.2, 10);
	rccar2.show();

	return 0;
}
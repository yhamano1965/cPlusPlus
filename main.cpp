#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car::showSum();

	Car car1;
	car1.setCar(1234, 20.5);

	Car::showSum();

	Car car2;
	car2.setCar(4567, 52.2);

	Car::showSum();

	return 0;
}
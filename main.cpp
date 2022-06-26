#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car car1;

	car1.setNumGas(1234, 25.5);
	buy(car1);
	car1.show();

	return 0;
}
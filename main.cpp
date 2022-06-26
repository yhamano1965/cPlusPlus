#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car car1;

	car1.setNumGas(1234, 25.5);
	car1.show();

	car1.setNumGas(1234, -10.0);
	car1.show();

	car1.setNumGas(1234, 2000.0);
	car1.show();

	return 0;
}
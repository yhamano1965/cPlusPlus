#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car car1;
	car1.show();

	Car car2(1234, 20.5);
	car2.show();

	return 0;
}
#include <iostream>	
#include "base1.h"
#include "base2.h"
#include "derive.h"
using namespace std;

int main()
{
	Derived drv0;

	drv0.showBs1();
	drv0.showBs2();
	drv0.showDr();

	cout << "\n";

	Derived drv1(1, 2, 3);

	drv1.showBs1();
	drv1.showBs2();
	drv1.showDr();

	return 0;
}
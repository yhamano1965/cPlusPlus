#include <iostream>	
#include "base1.h"
#include "base2.h"
#include "derive.h"
using namespace std;

int main()
{
	Derived drv0;

	drv0.Base1::showBs();
	drv0.Base2::showBs();
	drv0.showDr();

	cout << "\n";

	Derived drv1(1, 2, 3);

	drv1.Base1::showBs();
	drv1.Base2::showBs();
	drv1.showDr();

	return 0;
}
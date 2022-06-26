#include <iostream>	
#include "myfunc.h"
using namespace std;

void show(Car* pC)
{
	cout << "車のナンバーは" << pC->num << "：ガソリン量は" << pC->gas << "です。\n";
}
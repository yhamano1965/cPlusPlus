#include <iostream>	
#include "myfunc.h"
using namespace std;

void show(Car& c)
{
	cout << "車のナンバーは" << c.num << "：ガソリン量は" << c.gas << "です。\n";
}
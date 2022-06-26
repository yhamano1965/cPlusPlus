#include <iostream>	
#include "myfunc.h"
using namespace std;

void Car::show()
{
	cout << "車のナンバーは" << num << "：ガソリン量は" << gas << "です。\n";
}
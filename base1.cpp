#include <iostream>	
#include "base1.h"
#include "base2.h"
#include "derive.h"
using namespace std;

Base1::Base1()
{
	bs1 = 0;
}

Base1::Base1(int b1)
{
	bs1 = b1;
}

void Base1::showBs1()
{
	cout << "bs1‚Í" << bs1 << "‚Å‚·B(class Base1)\n";
}
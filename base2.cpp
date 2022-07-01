#include <iostream>	
#include "base1.h"
#include "base2.h"
#include "derive.h"
using namespace std;

Base2::Base2()
{
	bs2 = 0;
}

Base2::Base2(int b2)
{
	bs2 = b2;
}

void Base2::showBs()
{
	cout << "bs2‚Í" << bs2 << "‚Å‚·B(class Base2)\n";
}
#include <iostream>	
#include "base0.h"
#include "base1.h"
#include "base2.h"
#include "derive.h"
using namespace std;

Base0::Base0()
{
	bs0 = 0;
}

Base0::Base0(int b0)
{
	bs0 = b0;
}

void Base0::showBs0()
{
	cout << "bs0��" << bs0 << "�ł��B(class Base0)\n";
}
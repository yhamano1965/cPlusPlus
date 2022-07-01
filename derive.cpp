#include <iostream>	
#include "base1.h"
#include "base2.h"
#include "derive.h"
using namespace std;

Derived::Derived()
{
	dr = 0;
}

Derived::Derived(int bs1, int bs2, int d) : Base1(bs1), Base2(bs2)
{
	dr = d;
}

void Derived::showDr()
{
	cout << "dr‚Í" << dr << "‚Å‚·B(class Derived)\n";
}
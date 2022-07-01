#include <iostream>	
#include "base0.h"
#include "base1.h"
#include "base2.h"
#include "derive.h"
using namespace std;

Derived::Derived()
{
	dr = 0;
}

Derived::Derived(int b0, int b1, int b2, int d) : Base0(b0), Base1(b1), Base2(b2)
{
	dr = d;
}

void Derived::showDr()
{
	cout << "dr‚Í" << dr << "‚Å‚·B(class Derived)\n";
}
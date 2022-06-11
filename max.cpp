#include <iostream>	
#include "max.h"
using namespace std;

int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

double max(double x, double y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

#include <iostream>	
#include "max.h"
using namespace std;

template <class T>
T max_t(T x, T y)
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
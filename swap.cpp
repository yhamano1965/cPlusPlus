#include <iostream>	
#include "swap.h"
using namespace std;

void swap(int* pX, int* pY)
{
	int temp;

	temp = *pX;
	*pX = *pY;
	*pY = temp;
}

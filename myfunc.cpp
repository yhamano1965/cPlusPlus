#include <iostream>	
#include "myfunc.h"
using namespace std;

void Car::show()
{
	cout << "車のナンバーは" << num << "：ガソリン量は" << gas << "です。\n";
}

void Car::setNumGas(int n, double g)
{
	if (g > 0 && g < 1000)
	{
		num = n;
		gas = g;
		cout << "車のナンバーを" << num << "にガソリン量を" << gas << "にしました。\n";
	}
	else
	{
		cout << g << "は正しいガソリン量ではありません。\n";
		cout << "ガソリン量を変更できませんでした。\n";
	}
}
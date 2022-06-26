#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	Car car1;

	cout << "ナンバーは？\n";
	cin >> car1.num;

	cout << "ガソリン量は？\n";
	cin >> car1.gas;

	cout << "車のナンバーは" << car1.num << "：ガソリン量は" << car1.gas << "です。\n";

	return 0;
}
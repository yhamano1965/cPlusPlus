#include <iostream>
#include "swap.h"
using namespace std;

int main()
{
	int num1 = 5;
	int num2 = 10;

	cout << "変数num1の値は " << num1 << " です。\n";
	cout << "変数num2の値は " << num2 << " です。\n";
	cout << "\n変数num1と変数num2の値を交換します。\n\n";

	swap(&num1, &num2);

	cout << "変数num1の値は " << num1 << " です。\n";
	cout << "変数num2の値は " << num2 << " です。\n";

	return 0;
}
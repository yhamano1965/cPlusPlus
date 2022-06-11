#include <iostream>	
#include "max.h"
using namespace std;

int main()
{
	int a, b;
	double da, db;

	cout << "2つの整数を入力してください。\n";
	cin >> a >> b;

	cout << "2つの少数を入力してください。\n";
	cin >> da >> db;

	int ans1 = max(a, b);
	double ans2 = max(da, db);

	cout << "整数の最大値は " << ans1 << " です。\n";
	cout << "少数の最大値は " << ans2 << " です。\n";

	return 0;
}
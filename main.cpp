#include <iostream>	
#include "max.h"
using namespace std;

int main()
{
	int a, b;
	double da, db;

	cout << "2�̐�������͂��Ă��������B\n";
	cin >> a >> b;

	cout << "2�̏�������͂��Ă��������B\n";
	cin >> da >> db;

	int ans1 = max(a, b);
	double ans2 = max(da, db);

	cout << "�����̍ő�l�� " << ans1 << " �ł��B\n";
	cout << "�����̍ő�l�� " << ans2 << " �ł��B\n";

	return 0;
}
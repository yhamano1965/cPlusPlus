#include <iostream>	
#include "max.h"
using namespace std;

int main()
{
	int num1, num2, ans;

	cout << "1�Ԗڂ̐�������͂��Ă��������B\n";
	cin >> num1;

	cout << "2�Ԗڂ̐�������͂��Ă��������B\n";
	cin >> num2;

	ans = max(num1, num2);

	cout << "�ő�l�� " << ans << " �ł��B\n";

	return 0;
}
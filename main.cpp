#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	int num1, num2, ans;

	cout << "�P�Ԗڂ̐�������͂��Ă��������B\n";
	cin >> num1;

	cout << "�Q�Ԗڂ̐�������͂��Ă��������B\n";
	cin >> num2;

	ans = max(num1, num2);

	cout << "�ő�l��" << ans << "�ł��B\n";

	return 0;
}
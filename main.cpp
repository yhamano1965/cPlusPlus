#include <iostream>			
using namespace std;

int main()
{
	int res;

	cout << "��������͂��Ă��������B\n";

	cin >> res;

	switch (res)
	{
	case 1:
		cout << "1�����͂���܂����B\n";
		break;
	case 2:
		cout << "2�����͂���܂����B\n";
		break;
	default:
		cout << "1��2����͂��Ă��������B\n";
		break;
	}

	return 0;
}
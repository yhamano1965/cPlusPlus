#include <iostream>	
using namespace std;

int main()
{
	const int num = 5;
	int test[num];

	cout << num << " �l�̓_������͂��Ă��������B\n";
	for (int i = 0; i < num; i++)
	{
		cin >> test[i];
	}

	for (int j = 0; j < num; j++)
	{
		cout << j+1 << " �Ԃ̓_���� " << test[j] << " �ł��B\n";
	}

	return 0;
}
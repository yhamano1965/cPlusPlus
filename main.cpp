#include <iostream>	
using namespace std;

int main()
{
	int test[5] = { 80, 60, 22, 50, 75 };

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " �Ԃ̓_���� " << test[i] << " �ł��B\n";
	}

	return 0;
}
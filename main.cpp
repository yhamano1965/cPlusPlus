#include <iostream>	
using namespace std;

int main()
{
	const int num = 5;
	int test[num];

	cout << num << " 人の点数を入力してください。\n";
	for (int i = 0; i < num; i++)
	{
		cin >> test[i];
	}

	for (int s = 0; s < num - 1; s++)
	{
		for (int t = s + 1; t < num; t++)
		{
			if (test[t] > test[s])
			{
				int temp = test[t];
				test[t] = test[s];
				test[s] = temp;
			}
		}
	}


	for (int j = 0; j < num; j++)
	{
		cout << j + 1 << " 番の点数は " << test[j] << " です。\n";
	}

	return 0;
}
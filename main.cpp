#include <iostream>	
using namespace std;

const int num = 5;

double avg(int t[]);

int main()
{
	int test[num];

	cout << num << " �l�̓_������͂��Ă��������B\n";
	for (int i = 0; i < num; i++)
	{
		cin >> test[i];
	}

	double ans = avg(test);
	cout << num << "�l�̕��ϓ_�� " << ans << " �_�ł��B\n";

	return 0;
}

double avg(int t[])
{
	double sum = 0;

	for (int i = 0; i < num; i++)
	{
		sum += t[i];
	}

	return sum / num;
}
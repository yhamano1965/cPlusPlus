#include <iostream>	
using namespace std;

const int num = 5;

double avg(int* pT);

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

double avg(int* pT)
{
	double sum = 0;

	for (int i = 0; i < num; i++)
	{
		sum += pT[i];
	}

	return sum / num;
}
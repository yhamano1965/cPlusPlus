#include <iostream>	
using namespace std;

int main()
{
	int num;
	int* pT;

	cout << "���l�̃e�X�g�̓_������͂��܂����H\n";
	cin >> num;

	pT = new int[num];
	cout << num << "�l�̓_������͂��Ă��������B\n";

	for (int i = 0; i < num; i++)
	{
		cin >> pT[i];
	}

	for (int j = 0; j < num; j++)
	{
		cout << j+1 << "�Ԗڂ̓_����" << pT[j] << "�ł�\n";
	}

	delete pT;

	return 0;
}
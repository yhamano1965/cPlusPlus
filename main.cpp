#include <iostream>	
using namespace std;

void buy(int x = 10);

int main()
{
	cout << "1��ڂ�100���~�ōw�����܂��B\n";
	buy(100);
	
	cout << "\n";

	cout << "2��ڂ̓f�t�H���g���z�ōw�����܂��B\n";
	buy();

	return 0;
}

void buy(int x)
{
	cout << x << "���~�̎Ԃ𔃂��܂����B\n";
}
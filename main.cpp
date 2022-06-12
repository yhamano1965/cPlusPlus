#include <iostream>	
using namespace std;

int main()
{
	int a = 5;
	int& rA = a;

	cout << "変数aの値は " << a << " です。\n";
	cout << "参照rAの値は " << rA << " です。\n";
	cout << "変数aのアドレスは " << &a << " です。\n";
	cout << "参照rAの値は " << &rA << " です。\n\n";

	rA = 50;

	cout << "\n参照rAに50を代入しました。\n\n";

	cout << "変数aの値は " << a << " です。\n";
	cout << "参照rAの値は " << rA << " です。\n";
	cout << "変数aのアドレスは " << &a << " です。\n";
	cout << "参照rAの値は " << &rA << " です。\n\n";

	return 0;
}
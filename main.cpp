#include <iostream>	
#include "myfunc.h"
using namespace std;

int main()
{
	int num1, num2, ans;

	cout << "‚P”Ô–Ú‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
	cin >> num1;

	cout << "‚Q”Ô–Ú‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
	cin >> num2;

	ans = max(num1, num2);

	cout << "Å‘å’l‚Í" << ans << "‚Å‚·B\n";

	return 0;
}
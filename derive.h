#pragma once

class Derived : public Base1, public Base2
{
	protected:
		int dr;
	public:
		Derived();
		Derived(int b0, int b1, int b2, int d);
		void showDr();
};
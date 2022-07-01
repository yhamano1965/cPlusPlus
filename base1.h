#pragma once

class Base1 : public virtual Base0
{
	protected:
		int bs1;
	public:
		Base1();
		Base1(int b1);
		void showBs1();
};
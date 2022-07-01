#pragma once

class Base2 : public virtual Base0
{
	protected:
		int bs2;
	public:
		Base2();
		Base2(int b2);
		void showBs2();
};
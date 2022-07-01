class Derived : public Base1, public Base2
{
	protected:
		int dr;
	public:
		Derived();
		Derived(int bs1, int bs2, int d);
		void showDr();
};
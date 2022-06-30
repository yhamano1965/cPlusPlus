class Car : public Vehicle
{
	protected:
		int num;
		double gas;
	public:
		Car(int n, double g);
		void show();
};
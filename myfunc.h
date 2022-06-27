class Car
{
	private:
		int num;
		double gas;
	public:
		static int sum;
		Car();
		void setCar(int n, double g);
		void show();
		static void showSum();
};
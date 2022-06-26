class Car
{
	private:
		int num;
		double gas;

	public:
		int getNum(){return num;}
		double getGas(){return gas;}
		void show();
		void setNumGas(int n, double g);
};

void buy(Car c);
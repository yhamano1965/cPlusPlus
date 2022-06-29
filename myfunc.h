class Car
{
	private:
		int num;
		double gas;
	public:
		Car();
		void setCar(int n, double g);
		void show();
};

class RacingCar : public Car
{
private:
	int course;
public:
	RacingCar();
	void setCourse(int c);
};
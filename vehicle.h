class Vehicle
{
	protected:
		int speed;
	public:
		void setSpeed(int s);
		virtual void show() = 0;
};
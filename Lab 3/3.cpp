#include <iostream>

class carpark
{
public:
	int car_id;
	int ch_ph;
	int time;

	void setdata(int a, int b, int c)
	{
		car_id = a;
		ch_ph = b;
		time = c;
	}

	void showdata()
	{
		std::cout<<"Car of ID: "<< car_id<<"\nShould Pay Rs."<< ch_ph*time<<std::endl;
	}
};

int main()
{
	carpark car;
	car.setdata(120, 20, 3);
	car.showdata();

}
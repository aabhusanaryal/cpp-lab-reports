#include <iostream>

class Vehicle
{
private:
	int num_vehicle;
	float hour;
	float rate;

public:
	//constructor
	Vehicle(int n, float hr, float r)
	{
		num_vehicle = n;
		hour = hr;
		rate = r;
	}

	Vehicle (Vehicle& v)
	{
		num_vehicle = v.num_vehicle;
		hour = v.hour;
		rate = v.rate;
	}

	float discount()
	{
		return ((num_vehicle>10) ? 10.f:0.f);
	}

	void total_charge()
	{
		std::cout<<"For Vehicle Number:"<<num_vehicle<<std::endl;
		std::cout<<"Total charge is: Rs." << ((discount() == 10) ? 0.9f*hour*rate : hour*rate)<<std::endl;
	}

};

int main()
{
	Vehicle v1(1227, 1.5f, 250.f);
	v1.total_charge();
	Vehicle v2(1,1.5f, 250.f);
	v2.total_charge();
	Vehicle v3(v1);
	v3.total_charge();
	return 0;
}

//Create a class called carpark that has int data member for car id, int data member for charge/hour and float data member for time. Set the data and show the charges and parked hours of corresponding car id. Make two member functions for setting and showing the data. Member function should be called from other functions.
#include <iostream>
class CarPark{
	int m_charge_per_hour;
	int m_car_id;
	float m_time;
	public:
	void set_data(int charge, int id, float time){
		m_charge_per_hour = charge;
		m_time = time;
		m_car_id = id;
	}
	void show_charge(){
		std::cout << "Car id: "<< m_car_id <<" Total charge: " << m_charge_per_hour * m_time << std::endl;
	}
};
int main(){
	int number_of_cars;
	std::cout << "Enter number of cars" << std::endl;
	std::cin >> number_of_cars;
	CarPark* cars = new CarPark[number_of_cars];
	for(int i = 0; i < number_of_cars; i++){
		int car_id;
		int charge;
		float time;
		std::cout << "Gib id" << std::endl;
		std::cin >> car_id;
		std::cout << "Gib charge" << std::endl;
		std::cin >> charge;
		std::cout << "Gib time" << std::endl;
		std::cin >> time;
		cars[i].set_data(charge, car_id, time);
		cars[i].show_charge();
	}
	return 0;
}
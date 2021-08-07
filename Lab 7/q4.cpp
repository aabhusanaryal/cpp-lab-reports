//Create a polymorphic class Vehicle and create other derived classes Bus, Car and Bike from Vehicle. 
//With this program illustrate RTTI by the use of dynamic_cast and typeid operators.
#include <iostream>
#include <typeinfo>
class Vehicle {
	protected:
	int number_of_wheels;
	public:
	Vehicle(int wheels) : number_of_wheels(wheels) {}
	virtual void display() = 0;
};
class Bus: public Vehicle {
	public:
	Bus(int wheels) : Vehicle(wheels) {}
	void display() override {
		std::cout << "The number of wheels in " << typeid(*this).name() << " is " << number_of_wheels << "\n";
	}
};
class Bike: public Vehicle {
	public:
	Bike(int wheels) : Vehicle(wheels) {}
	void display() override {
		std::cout << "The number of wheels in " << typeid(*this).name() << " is " << number_of_wheels << "\n";
	}
};
class Car: public Vehicle {
	public:
	Car(int wheels) : Vehicle(wheels) {}
	void display() override {
		std::cout << "The number of wheels in " << typeid(*this).name() << " is " << number_of_wheels << "\n";
	}
};
int main() {
	Vehicle* v[2] = {new Car(4), new Bike(2)};
	std::cout << typeid(*v[0]).name() << std::endl;
	std::cout << typeid(*v[1]).name() << std::endl;
	std::cout << typeid(*(new Bus(4))).name() << std::endl;
	Vehicle* vec;
	if(vec = dynamic_cast<Bike*>(v[0]))
		vec->display();
	else
		std::cout << "Can't convert " << typeid(*v[0]).name() << " to " << typeid(Bike).name() <<"\n";
	if( vec = dynamic_cast<Bike*>(v[1]))
		vec->display();
	return 0;
}
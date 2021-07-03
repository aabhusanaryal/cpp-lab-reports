//Assume that one constructor initializes data member say num_vehicle, hour and rate. 
//There should be 10% discount if num_vehicle exceeds 10. Display the total charge.
//Use two objects and show bit-by-bit copy of one object to another (make your own copy constructor).
#include <iostream>
class Vehicle{
	public:
	int num_vehicle, hour;
	float rate, discount;
	Vehicle(int num, int hour, float rate) : num_vehicle(num), hour(hour), rate(rate){
		discount = num > 10 ? 0.1f : 0; 
	}
	Vehicle(Vehicle& vec)	{
		num_vehicle = vec.num_vehicle;
		hour = vec.hour;
		rate = vec.rate;
		discount = vec.discount;
	}
	void print_charge()	{
		std::cout << "The total charge for " << hour <<" hrs at the rate of " << rate << " is " <<  (1.f - discount) * rate * hour * num_vehicle <<" for "<<num_vehicle<< "vehicles\n";
	}
};
int main(){
	Vehicle vec1(11, 3, 2.5f);
	Vehicle vec2 = vec1;
	Vehicle vec3(5, 5, 2.5f);
	vec1.print_charge();
	vec2.print_charge();
	vec3.print_charge();
	return 0;
}
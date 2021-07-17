//1.Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. 
//Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.
#include <iostream>
class Distance {
	int m;
	float cm;
public:
	Distance(float dis) : m((int)dis), cm((dis - m) * 100) {}
	operator float() { return ((float) m + cm / 100.f); }
	friend std::ostream& operator<<(std::ostream& stream, const Distance& d) {
		stream << d.m << "m and " << d.cm << "cm";
		return stream;
	}
};
int main() {
	float d;
	std::cout << "Gib distance\n";
	std::cin >> d;
	Distance distance(d);
	std::cout << distance << std::endl;
	float d1 = distance;
	std::cout << "Distance in float is " << d1 << std::endl;
	return 0;
}
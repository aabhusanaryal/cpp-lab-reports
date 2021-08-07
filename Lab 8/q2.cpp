//2. Write a program to create a userdefined manipulator that will format the output by setting the width, precision and 
//fill character at the same time by passing arguments.
#include <iostream>
#include <iomanip>
class MyManip {
	int width, precision;
	char c;
public:
	MyManip(int width, int precision, char c): width(width), precision(precision), c(c) {}
	friend std::ostream& operator<<(std::ostream& stream, const MyManip& m) {
		stream << std::setw(m.width) << std::setprecision(m.precision) << std::setfill(m.c);
		return stream;
	}
};
int main() {
	std::cout << MyManip(15, 3, 'c') << 3.141592 << std::endl;
	return 0;
}
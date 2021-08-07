//3. Write a program to overload stream operators to read complex number and display the complex number in a+ib format.
#include <iostream>
#define ABS(a) (a > 0 ? a : -a)
class Complex {
	float real, img;
public:
	Complex(float r = 0, float i = 0) : real(r), img(i) {}
	friend std::ostream& operator<<(std::ostream& stream, const Complex& c)	{
		stream << c.real << (c.img > 0 ? " +" : " -") << " i" << ABS(c.img);
		return stream;
	}
	friend std::istream& operator>>(std::istream& stream, Complex& c) {
		stream >> c.real >> c.img;
		return stream;
	}
};
int main() {
	Complex c;
	std::cout << "Enter complex number\n";
	std::cin >> c;
	std::cout << c;
}
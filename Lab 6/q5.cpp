//5. Write base class that ask the user to enter a complex number and make a derived class that adds the complex number of its
// own with the base. Finally make third class that is friend of derived and calculate the difference of base complex number and
//its own complex number.
#include <iostream>
class Complex {
protected:
	float real, img;
public:
	Complex(float r = 0, float i = 0) : real(r), img(i) {}
	void get_input() {
		std::cout << "Gib complex\n";
		std::cin >> real >> img;
	}
	friend std::ostream &operator<<(std::ostream &stream, const Complex &c)	{
		stream << c.real << " + " << c.img << "i";
		return stream;
	}
};
class Complex_add : public Complex {
	float real = 0, img = 0;
public:
	Complex_add(Complex c, float r = 0, float i = 0) : Complex(c), real(r), img(i) {}
	Complex_add& add() {
		real += Complex::real;
		img += Complex::img;
		return *this;
	}
	friend std::ostream &operator<<(std::ostream &stream, const Complex_add &c)	{
		stream << c.real << " + " << c.img << "i";
		return stream;
	}
	friend class Complex_sub;
};
class Complex_sub {
	float real, img;
public:
	Complex_sub(float r = 0, float i = 0) : real(r), img(i) {}
	Complex_sub& sub(const Complex_add &c) {
		real -= c.Complex_add::real;
		img -= c.Complex_add::img;
		return *this;
	}
	friend std::ostream &operator<<(std::ostream &stream, const Complex_sub &c)	{
		stream << c.real << " + " << c.img << "i";
		return stream;
	}
};
int main(){
	Complex c1;
	c1.get_input();
	Complex_add c2(c1);
	Complex_sub c3(30.f, 10.f);
	std::cout << c2.add().add() << std::endl;
	std::cout << c3.sub(c2) << std::endl;
	return 0;
}
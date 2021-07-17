//1. Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.
//A. make a particular member function of one class to friend function in another class for addition
//B. make other three functions to work as a bridge between the classes for multiplication, division and subtraction.
//C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class 
//if the former class is made friend to the latter.
//Make least possible classes to demonstrate all above in single program without conflict.

#include <iostream>
class Cartesian2;
class Cartesian1{
	float x,y;
	public:
	Cartesian1(float x = 0, float y = 0) : x(x), y(y) {}
	Cartesian1 add(Cartesian2);
	friend class Cartesian3;
	friend Cartesian2 sub(Cartesian1, Cartesian1);
	friend Cartesian2 mult(Cartesian1, float);
	friend Cartesian2 div(Cartesian1, float);
	void display(){
		std::cout << x << "," << y << std::endl;
	}
};
class Cartesian2{
	float x,y;
	public:
	Cartesian2(float x = 0, float y = 0) : x(x), y(y) {}
	friend Cartesian1 Cartesian1::add(Cartesian2);
	void display(){
		std::cout << x << "," << y << std::endl;
	}
};
Cartesian1 Cartesian1::add(Cartesian2 c){
	return Cartesian1(x + c.x, y + c.y);
}
Cartesian2 sub(Cartesian1 a, Cartesian1 b){
	return Cartesian2(a.x - b.x, a.y - b.y);
}
Cartesian2 mult(Cartesian1 a, float b){
	return Cartesian2(a.x * b, a.y * b);
}
Cartesian2 div(Cartesian1 a, float b){
	return Cartesian2(a.x / b, a.y / b);
}
class Cartesian3{
	float x,y;
	public:
	Cartesian3(float x = 0, float y = 0): x(x), y(y) {}
	Cartesian3 add(Cartesian1& c){
		return Cartesian3(x + c.x, y + c.y);
	}
	void display(){
		std::cout << x << "," << y << std::endl;
	}
};
int main(){
	Cartesian1 cart1(1.f, 2.f);
	Cartesian2 cart2(2.f, 3.f);
	std::cout << "A: ";
	cart1.add(cart2).display();
	std::cout << "B:\n";
	sub(cart1, cart1).display();
	mult(cart1, 2.f).display();
	div(cart1, 2.f).display();
	Cartesian3 cart3;
	std::cout << "C: ";
	cart3.add(cart1).display();
	return 0;
}
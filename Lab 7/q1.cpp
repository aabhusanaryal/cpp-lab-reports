//Write a program to create a class shape with functions to find area of the shapes and 
//display the name of the shape and other essential component of the class. Create derived classes circle,
//rectangle and trapezoid each having overridden functions area and display. Write a suitable program to 
//illustrate virtual functions and virtual destructor.
#include <iostream>
#define PI 3.141592f
class Shape {
	public:
	virtual ~Shape() {}
	virtual float area() { return 0;}
	virtual void display() {}
};
class Circle: public Shape {
	float *r;
	public:
	Circle(float _r = 0) {	r = new float; *r = _r; }
	~Circle() {delete r; }
	float area() override { return PI * *r * *r;}
	void display() override {std::cout <<"Circle Area is: " << area() << std::endl; }
};
class Rectangle : public Shape {
	float *l,*b;
	public:
	Rectangle(float _l = 0, float _b = 0) {
		l = new float; *l = _l;
		b = new float; *b = _b;
	}
	~Rectangle() {delete l; delete b;}
	float area() override { return *l * *b;}
	void display() override {std::cout <<"Rectangle Area is: " << area() << std::endl; }
};
class Trapezoid : public Shape {
	float *a,*b,*h;
	public:
	Trapezoid(float _a = 0, float _b = 0, float _h = 0) {
		a = new float; *a = _a;
		b = new float; *b = _b;
		h = new float; *h = _h;
	}
	~Trapezoid() { delete a;delete b;delete h;}
	float area() override { return (*a + *b) * *h / 2;}
	void display() override {std::cout <<"Trap Area is: " << area() << std::endl; }
};
int main() {
	Shape* s1 = new Rectangle(1.f,2.f);
	Shape* s2 = new Circle(5.f);
	Shape* s3 = new Trapezoid(1.f, 2.f, 3.f);
	s1->display(); s2->display(); s3->display();
	delete s1;  delete s2; delete s3;
	return 0;
}
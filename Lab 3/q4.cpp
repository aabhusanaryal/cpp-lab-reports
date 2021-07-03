//Write a program with classes to represent circle, rectangle and triangle. Each classes should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects and other useful functions. Use the classes to create objects in your program.
#include <cmath>
#include <iostream>
constexpr float PI = 3.141592f;
class Circle{
	public:
	float radius;
	float get_area(){
		return PI * radius * radius;
	}
	float get_perimeter(){
		return 2 * PI * radius;
	}
	void show_area(){
		std::cout << "Circle's area is " << get_area() << std::endl;
	}
	void show_perimeter(){
		std::cout << "Circle's perimeter is " << get_perimeter() << std::endl;
	}
};
class Rectangle{
	public:
	float l,b;
	float get_area(){
		return l * b;
	}
	void show_area(){
		std::cout << "Rectangle's area is " << get_area() << std::endl;
	}
	void show_perimeter(){
		std::cout << "Rectangle's perimeter is " << get_perimeter() << std::endl;
	}
	float get_perimeter(){
		return 2 * (l + b);
	}
	
};
class Triangle{
	public:
	float a,b,c;
	float get_area(){
		float s = ( a + b + c) / 2.f;
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}
	float get_perimeter(){
		return a + b + c;
	}
	void show_area(){
		std::cout << "Triangle's area is " << get_area() << std::endl;
	}
	void show_perimeter(){
		std::cout << "Triangle's perimeter is " << get_perimeter() << std::endl;
	}
};
int main(){
	Triangle triangle;
	Rectangle rectangle;
	Circle circle;
	std::cout << "Gib triangle sides a,b,c" << std::endl;
	std::cin >> triangle.a >> triangle.b >> triangle.c;
	std::cout << "Gib rectangle length l,b" << std::endl;
	std::cin >> rectangle.l >> rectangle.b;
	std::cout << "Gib radius r" << std::endl;
	std::cin >> circle.radius;
	triangle.show_perimeter();
	triangle.show_area();
	circle.show_perimeter();
	circle.show_area();
	rectangle.show_perimeter();
	rectangle.show_area();
	
}

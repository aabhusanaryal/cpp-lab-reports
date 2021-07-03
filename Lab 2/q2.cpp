//Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.

#include <iostream>

float feet_to_inch()
{
	float feet;
	std::cout << "Gib feet = ";
	std::cin >> feet;
	std::cout << "feet_to_inch() = " << feet * 12<< std::endl;
	return feet;
}

inline float feet_to_inch(float feet)
{
	return feet * 12;
}

inline void feet_to_inch(float feet, float& inches)
{
	inches = feet * 12;
}

int main()
{
	float feet = feet_to_inch();
	std::cout <<"feet_to_inch(float) = " << feet_to_inch(feet) << std::endl;
	float inch;
	feet_to_inch(feet, inch);
	std::cout << "feet_to_inch(float, float) = " << inch << std::endl;
	return 0;
}
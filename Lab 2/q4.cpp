//Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.

#include <iostream>

float& temperature(float& t1, float& t2)
{
	return t1 > t2 ? t1 : t2;
}

int main()
{
	float t1,t2,t3;
	std::cout << "Gib temperatures" << std::endl;
	std::cin >> t1 >> t2;
	std::cout << "Give maxm temp" << std::endl;
	std::cin >> t3;
	temperature(t1,t2) = t3;
	std::cout << "Here temperature t1: " << t1 << " t2: " << t2 << std::endl;
	return 0;
}
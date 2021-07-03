//5.Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.

#include <iostream>

inline float deduct_tax(float salary)
{
	return salary * 0.9f; ;
}

int main()
{
	float salary;
	std::cout << "Gib salary " << std::endl;
	std::cin >> salary;
	std::cout << deduct_tax(salary);
	return 0;
}
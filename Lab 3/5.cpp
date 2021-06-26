#include <iostream>

class Employee
{
	std::string id;
	int overtime;
	std::string bonus;
	int year;

public:
	void setpara(std::string a, int b, std::string c, int d)
	{
		id = a;
		overtime = b;
		bonus = c;
		year = d;
	}

	void displayReport()
	{
		std::cout << "Employee with id " << id <<
			" has recieved Rs." << bonus <<
			" as bonus\n and, \n had worked "
			<< overtime << " hours as a overtime in year "
			<< year << std::endl;
	}

};

int main()
{
	std::cout << "Enter the number of employees" << std::endl;
	int size;
	std::cin >> size;

	std::string id, bonus;
	int year, overtime;
	Employee* employee;

	employee = new Employee[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "For employee: " << i+1 << std::endl;
		std::cout << "Enter id" << std::endl;
		std::cin >> id;
		std::cout << "Enter overtime" << std::endl;
		std::cin >> overtime;
		std::cout << "Enter bonus" << std::endl;
		std::cin >> bonus;
		std::cout << "Enter year" << std::endl;
		std::cin >> year;
		employee[i].setpara(id, overtime, bonus, year);
	}

	for (int i = 0; i < size; i++)
	{
		employee[i].displayReport();
	}
	return 0;
}
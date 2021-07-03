//Assume that an object represents an employee report that contains the information like employee id, total bonus, total overtime in a particular year. Use array of objects to represent n employees' reports. Write a program that displays report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the reports according to parameter passed. Display the report in following format.
//Employee with ... ... ... has received Rs ... ... ...as bonus
//and
//had worked ... ... ... hours as a over time in  year ... ... ...
#include <iostream>
class EmployeeReport{
	int id;
	int total_bonus;
	int total_overtime;
	int year;
	public:
	void setpara(int id, int total_bonus, int total_overtime, int year){
		this->id = id;
		this->total_bonus = total_bonus;
		this->total_overtime = total_overtime;
		this->year = year;
	}
	
	void displayreport(){
		std::cout << "Employee with id: " << id << " has recieved Rs. " << total_bonus << " as bonus and had worked " << total_overtime << " hrs in the year " << year << std::endl;
	}
};
int main(){
	int size;
	std::cout << "Enter number of employees" << std::endl;
	std::cin >> size;
	EmployeeReport* report = new EmployeeReport[size];
	for(int i = 0; i < size; i++){
		int id, bonus, overtime, year;
		std::cout << "Enter the employee id" << std::endl;
		std::cin >> id;
		std::cout << "Enter the total bonus" << std::endl;
		std::cin >> bonus;
		std::cout << "Enter the total overtime" << std::endl;
		std::cin >> overtime;
		std::cout << "Enter the year" << std::endl;
		std::cin >> year;
		report[i].setpara(id, bonus, overtime, year);
	}
	for(int i = 0; i < size; i++)
		report[i].displayreport();
	return 0;
}
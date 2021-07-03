 
//Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function

#include <iostream>

struct Date
{
	int year;
	int month;
	int day;
};

void print_date(Date date)
{
	std::cout << date.month << "/" <<date.day <<"/"<<date.year <<std::endl;
}

int main()
{
	Date date;
	std::cout << "Gib data in mm dd yy" << std::endl;
	std::cin >> date.month >> date.day >> date.year;
	print_date(date);
	return 0;
}


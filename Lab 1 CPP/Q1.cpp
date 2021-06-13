#include<iostream>
/*
Write a program to set a structure to hold a date (mm,dd and yy), assign 
values to the members of the structure and print out the values in the format 
11/28/2004 by function. Pass the structure to the function*/

struct Date {
	int m;
	int d;
	int y;
};

void format(Date date)
{
	std::cout << "Formatted output is: " << std::endl;
	std::cout << date.m << "/" << date.d << "/" << date.y << std::endl;
}

int main()
{
	Date date;
	std::cout << "Enter Month"<<std::endl;
	std::cin >> date.m;
	std::cout << "Enter Day" << std::endl;
	std::cin >> date.d;
	std::cout << "Enter Year" << std::endl;
	std::cin >> date.y;

	format(date);
}
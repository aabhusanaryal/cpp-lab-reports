//6.Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are

//Chief executive officer Rs. 35000/m
//Information officer Rs. 25000/m
//System analyst Rs. 24000/m
//Programmer Rs. 18000/m
//Make function that takes two arguments; one salary and other increment. Use proper default argument.

#include <iostream>


float increase_salary(int salary, int increase = 12)
{
	return salary + salary * increase/100.f;
}

int main()
{
	std::cout<<"CEO salary " << increase_salary(35000, 9) << std::endl;
	std::cout<<"Information Officer salary " << increase_salary(25000, 10) << std::endl;
	std::cout<<"System Analyst salary " << increase_salary(24000) << std::endl;
	std::cout<<"Programmer salary " << increase_salary(18000) << std::endl;
	return 0;
}
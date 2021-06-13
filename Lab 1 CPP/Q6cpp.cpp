#include<iostream>


float salaryupdater69(int salary, int per)
{
	return (salary + salary * (per / 100.f));
}

void log(const char* pos,int s, int per)
{
	float news = salaryupdater69(s, per);
	std::cout << pos << "'s new salary is: " << news << std::endl;
}

int main()
{
	int e1=35000 , e2 = 25000, e3= 24000, e4= 18000;
	int p1 = 9, p2 = 10, p3 = 12;

	log("CEO,", e1, p1);
	log("IO", e2, p2);
	log("SA", e3, p3);
	log("P", e4, p3);

}
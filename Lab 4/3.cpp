#include <iostream>

class Department
{
	std::string id;
	std::string name;
	static int count;
	static int temp;
	
public:
	Department(std::string i, std::string n)
	{
		std::cout<<"Initializing data in the constructor"<<std::endl;
		std::cout<<"Department ID = "<<i<<std::endl;
		std::cout<<"Department Name = "<<n<<std::endl;
		id = i;
		name = n;
		count++;
	}

	~Department()
	{
		std::cout<<"Object "<< count << " goes out of scope."<<std::endl;
	}
};

int Department::count = 0;

int main()
{
	{
		Department d1("Sales", "4220");
	}
	Department d2("Marketing", "1992");

	return 0;
}

#include<iostream>



class Number
{
public:

	int num;
	bool isPrime()
	{
		for (int i = 2; i < num/2; i++)
		{
			if (num%i == 0)
				return 1;
		}
		return 0;
	}
};

int main()
{
	
	while (1)
	{
		char choice;
		Number n1;
		std::cout<<"Enter a number"<<std::endl;
		std::cin>> n1.num;
		if (n1.isPrime())
			std::cout<<"Not prime"<<std::endl;
		else
			std::cout<<"Prime"<<std::endl;
		std::cout<<"Y to continue and N to stop"<<std::endl;
		std::cin>>choice;
		if (choice == 'Y' || choice == 'y')
		{
			continue;
		}
		break;
	}
}
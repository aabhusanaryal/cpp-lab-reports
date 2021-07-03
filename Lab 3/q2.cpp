//Assume that you want to check whether the number is prime or not. Write a program that asks for a number repeatedly. When it finishes the calculation the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object class concept.
#include <iostream>
#include <cmath>

class Number{
	public:
	int m_number;
	bool is_prime()
	{
		for(int i = 2; i < sqrt(m_number); i++)
			if(m_number % i == 0) return false;
		return true;
	}
};

int main(){
	Number number;
	char choice;
	std::cout << "Do you want to check if prime? y/n" << std::endl;
	std::cin >> choice;
	while(choice == 'y' || choice == 'Y'){
		std::cout << "Gib number" << std::endl;
		std::cin >> number.m_number;
		
		number.is_prime() ? std::cout << number.m_number<< " is prime" << std::endl : std::cout << number.m_number<< " is composite" << std::endl;
		std::cout << "Do you want to check if prime? y/n" << std::endl;
		std::cin >> choice;
	}
	
	return 0;
}
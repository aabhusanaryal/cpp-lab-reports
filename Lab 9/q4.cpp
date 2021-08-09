//4. Write any program that demonstrates the use of multiple catch handling, re-throwing an exception, and catching all exception

#include <iostream>
#include <cmath>

class divide_exception{};
class negative_exception{};

int main()
{
	try {
		float n1, n2, n3;
		std::cout << "Enter three numbers, two for division, one for sqrt ";
		std::cin >> n1 >> n2 >> n3;
		
		try {
			if(n2 == 0) throw divide_exception();
			std::cout << n1 << " / " << n2 << " = " << n1 / n2 << std::endl;
			if(n3 < 0) throw negative_exception();
			std::cout << "Sqrt( " << n3 << " ) = " << sqrt(n3) << std::endl;
		}
		catch(divide_exception) {
			std::cerr << "Tried dividing by zero\n";
			throw;
		}
		catch(negative_exception) {
			std::cerr << "Tried taking the square root of negative number\n";
			throw;
		}
	}
	catch(...) {
		std::cerr << "Exception Occured\n";
	}
	return 0;
}
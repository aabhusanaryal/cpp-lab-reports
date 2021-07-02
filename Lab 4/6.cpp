#include <iostream>

class Count
{
private:
	static int count;


public:
	Count()
	{
		count++;
		std::cout<<"Object of serial number " <<count<<" created"<<std::endl;
	}

	int total()
	{
		return count;
	}

};

int Count::count;

int main()
{
	Count c1;
	Count c2;
	Count c3;
	Count c4;
	Count c5;
	std::cout<<c1.total()<<" objects created.";
	return 0;
}

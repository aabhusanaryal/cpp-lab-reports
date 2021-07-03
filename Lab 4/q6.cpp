//Create a class with a data member to hold "serial number" for each object created from the class. 
//That is, the first object created will be numbered 1, the second 2 and so on by using the basic concept of static data members. 
//Use static member function if it is useful in any of the member functions declared in the program.
//Otherwise make separate program that demonstrate the use of static member function.
#include <iostream>
class Objects{
	int serial_num;
	public:
	static int serial_number;
	static int total_count;
	static void display_total_objects_created(){
		std::cout << "Total Objects Created = " << total_count << "\n";
	}
	Objects(){
		serial_number++;
		total_count++;
		serial_num = serial_number;
	}
	void print_serial(){
		std::cout << "Created with serial number: " << serial_num << "\n";
	}
	~Objects(){
		serial_number--;
	}
};
int Objects::serial_number = 0;
int Objects::total_count;
int main(){
	Objects obj1;
	obj1.print_serial();
	{
		Objects obj2;
		obj2.print_serial();
		Objects obj3;
		obj3.print_serial();
	}
	Objects obj4;
	obj4.print_serial();
	Objects::display_total_objects_created();
	return 0;
}
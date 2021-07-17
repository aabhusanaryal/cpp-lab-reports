//4. Write three derived classes inheriting functionality of base class person (should have a member function that asks to enter 
//name and age) and with added unique features of student, and employee, and functionality to assign, change and delete records
// of student and employee. And make one member function for printing address of the objects of classes (base and derived) using
// this pointer. Create two objects of base class and derived classes each and print the addresses of individual objects. 
//Using calculator, calculate the address space occupied by each object and verify this with address spaces printed by the program.
#include <iostream>
//#pragma pack(1)
class Person
{
	std::string name;	int age; int foo;
public:
	Person(std::string name = "", int age = -1): name(name), age(age) {}
	void get_input() {
		std::cout << "Gib name and age\n";
		std::cin >> name >> age;
	}
	void print_record(){
		std::cout << "Name: " << name << "\nAge: "<< age << "\n";
	}
	void print_address() {
		std::cout << "Object address: " << get_address() << std::endl;
	}
	Person* get_address() { return this; }
};
class Student: public Person {
	int rank, roll;
public:
	Student(int rank = 0, int roll = 0) : rank(rank), roll(roll) {}
	void print_record() {
		Person::print_record();
		std::cout << "Rank: " << rank << "\nRoll: "<< roll << "\n";
	}
};
class Employee: public Person {
	int salary, foo;
public:
	Employee(int sal = 0) : salary(sal) {}
	void print_record() {
		Person::print_record();
		std::cout << "Salary: " << salary << "\n";
	}	
};
class CollegStudent: public Person{	public:std::string depart = "";};
int main(){
	Person p1, p2;
	Student s1, s2;
	Employee e1, e2;
	std::cout << "Base address:\n";
	p1.print_address(); p2.print_address();
	std::cout << "Student address:\n";
	s1.print_address(); s2.print_address();
	std::cout << "Empolyee address:\n";
	e1.print_address(); e2.print_address();
	std::cout << "Person size: " << sizeof(Person) << std::endl;
	std::cout << "Student size: " << sizeof(Student) << std::endl;
	std::cout << "Employee size: " << sizeof(Employee) << std::endl;
	return 0;
}
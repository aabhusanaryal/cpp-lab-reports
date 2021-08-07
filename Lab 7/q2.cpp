//Create a class Person and two derived classes Employee, and Student, inherited from class Person. 
//Now create a class Manager which is derived from two base classes Employee and Student. 
//Show the use of the virtual base class.
#include <iostream>
class Person {
private:
	std::string name;
public:
	Person(std::string name) : name(name) {}
	std::string& get_name()	{
		return name;
	}
};
class Employee: virtual public Person {
public:
	int salary;
	Employee(std::string name = "", int sal = 0) : Person(name), salary(sal) {}
	int get_salary() {
		return salary;
	}
};
class Student: virtual public Person {
public:
	std::string grade;
	Student(std::string name = "", std::string grade = "") : Person(name), grade(grade) {}
	std::string& get_grade() {
		return grade;
	}
};

class Manager: public Employee, public Student {
public:
	Manager(std::string name = "", std::string grade = "", int salary = 0) : Employee(name, salary), Student(name, grade), Person(name) {}
};
int main() {
	Manager man("Ram", "Bachelor's", 25000);
	std::cout << man.get_name() << std::endl;
	std::cout << man.get_grade() << std::endl;
	std::cout << man.get_salary() << std::endl;
	return 0;
}
//Write a program with Student as abstract class and create derive classes Engineering, 
//Medicine and Science from base class Student. Create the objects of the derived classes and process them and 
//access them using array of pointer of type base class Student.
#include <iostream>
class Student {
protected:
	std::string name;
public:
	virtual void print_data() = 0;
};
class Engineering: public Student{
public:
	Engineering(std::string name) {
		this->name = name;
	}
	void print_data() override {
		std::cout << "Engineering student: " << name << std::endl;
	}
};
class Medicine: public Student{
public:
	Medicine(std::string name) {
		this->name = name;
	}	
	void print_data() override {
		std::cout << "Medicine student: " << name << std::endl;
	}
};
class Science: public Student{
public:
	Science(std::string name) {
		this->name = name;
	}
	void print_data() override {
		std::cout << "Science student: " << name << std::endl;
	}
};
int main() {
	Student* s[3];
	s[0] = new Engineering("Ram");
	s[1] = new Medicine("Shyam");
	s[2] = new Science("Hari");
	for(int i = 0; i < 3; i++) s[i]->print_data();
}
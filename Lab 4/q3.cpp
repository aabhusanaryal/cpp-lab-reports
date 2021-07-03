//Write a class that can store Department ID and Department Name with constructors to initialize its members. 
//Write destructor member in the same class and display the message "Object n goes out of the scope". '
//Your program should be made such that it should show the order of constructor and destructor invocation.
#include <cstring>
#include <iostream>
class Depart{
	char* m_name;
	int m_len, m_id;
	public:
	Depart(const char* name, int id) : m_id(id){
		m_len = strlen(name);
		m_name = new char[m_len];
		strcpy(m_name, name);
		std::cout << "Object with ID: " << m_id << " and name: " << m_name <<" has been created" << std::endl;
	}
	~Depart(){
		std::cout << "Object with ID: " << m_id << " and name: " << m_name << " has gone out of scope" << std::endl;
		delete m_name;
	}
};
int main(){
	Depart dep("Obj 1", 3);
	{ Depart dep2("Obj 2", 4); }
	return 0;
}
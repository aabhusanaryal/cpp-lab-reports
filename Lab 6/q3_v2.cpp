//3. Create a class called Musicians to contain three methods string ( ), wind ( ) and perc ( ). 
//Each of these methods should initialize a string array to contain the following instruments
// - veena, guitar, sitar, sarod and mandolin under string ( )
// - flute, clarinet saxophone, nadhaswaram and piccolo under wind ( )
// - tabla, mridangam, bangos, drums and tambour under perc ( )
// It should also display the contents of the arrays that are initialized. 
// Create a derived class called TypeIns to contain a 
//method called get ( ) and show ( ). The get ( ) method must display a  menu as follows
//Type of instruments to be displayed
//a. String instruments
//b. Wind instruments
//c. Percussion instruments
//The show ( ) method should display the relevant detail according to our choice. 
//The base class variables must be accessible only to its derived classes.
#include <iostream>
class Musicians {
protected:
	std::string m_string[5];
	std::string m_wind[5];
	std::string m_perc[5];
	std::string* m_active;
	void copy_display_array(std::string* dest, std::string* src) {
		for(int i = 0; i < 5; i++)	{
			dest[i] = src[i];
			std::cout << src[i] << std::endl;
		}
	}
public:
	void string(){ 
		std::string temp[] = { "veena", "guitar", "sitar", "sarod", "mandolin" }; 
		std::cout << "String assigned to:\n";
		copy_display_array(m_string, temp);
		m_active = m_string;
	}
	void wind() {
		std::string temp[] = { "flute", "clarinet", "saxophone", "nadhaswaram", "piccolo" }; 
		std::cout << "String assigned to:\n";
		copy_display_array(m_wind, temp);
		m_active = m_wind;
	}
	void perc() { 
		std::string temp[] = { "tabla", "mridangam", "bangos", "drums", "tambour" }; 
		std::cout << "String assigned to:\n";
		copy_display_array(m_perc, temp);
		m_active = m_perc;
	}
};
class TypeIns: public Musicians {
public:
	void get() {
		std::cout << "Type of instruments to be displayed:\na. String instruments.\nb. Wind instruments.\nc. Percussion instruments.\n";
		char choice;
		std::cin >> choice;
		switch(choice) {
				case 'a': string();	break;
				case 'b': wind(); break;
				case 'c': perc(); break;
				default: std::cout << "Unhandled input given. Terminating\n";
					return;
			}
			show(m_active);
		}
	void show(std::string* strings) {
		std::cout << "User selected:\n";
		for(int i = 0; i < 5; i++) std::cout << i + 1 << ". "<< strings[i] << std::endl;
	}
};
int main() {
	TypeIns ins;
	ins.get();
	return 0;
}
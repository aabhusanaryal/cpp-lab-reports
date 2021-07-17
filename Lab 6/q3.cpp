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
#include <vector>
#include <iostream>
class Musicians {
protected:
	std::vector<std::string> m_instruments;
public:
	void string(){ m_instruments = { "veena", "guitar", "sitar", "sarod", "mandolin" }; }
	void wind() { m_instruments = { "flute", "clarinet", "saxophone", "nadhaswaram", "piccolo" }; }
	void perc() { m_instruments = { "tabla", "mridangam", "bangos", "drums", "tambour" }; }
};
class TypeIns: public Musicians {
public:
	void get() {
		std::cout << "Type of instruments to be displayed:\na. String instruments.\nb. Wind instruments.\nc. Percussion instruments.\n";
		char choice;
		std::cin >> choice;
		switch(choice) {
				case 'a': string();
				break;
				case 'b': wind();
				break;
				case 'c': perc();
				break;
				default: std::cout << "Unhandled input given. Terminating\n";
					return;
			}
			show();
		}
	void show() {
		for(int i = 0; i < 5; i++) std::cout << i + 1 << ". "<< m_instruments[i] << std::endl;
	}
};
int main() {
	TypeIns ins;
	ins.get();
	return 0;
}
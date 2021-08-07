//4. Write a program that stores the information about students (name, student id,department and address) in a structure and then
// transfers the information to a file in your directory. Finally, retrieve the information from your file and print in the proper 
//format on your output screen.
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
struct Student {
	std::string name, id, depart, address;
};
int main()
{
	std::ofstream out_file;
	out_file.open("Students.txt");
	char choice;
	do {
		Student s;
		std::cout << "Enter name: \n";
		std::cin >> s.name;
		std::cout << "Enter id: \n";
		std::cin >> s.id;
		std::cout << "Enter depart: \n";
		std::cin >> s.depart;
		std::cout << "Enter address: \n";
		std::cin >> s.address;
		out_file.write((char*)&s, sizeof(s));
		std::cout << "Enter more student data? (Y/N)\n";
		std::cin >> choice;
	} while(choice == 'y' || choice == 'Y');
	out_file.close();
	std::ifstream in_file("Students.txt");
	std::cout << std::left;
	std::cout << std::setw(20) << "Name" << std::setw(20) << "ID" << std::setw(8) << "Depart" << std::setw(20) << "Address" << std::endl;
	while (in_file) {
        Student s;
        in_file.read((char*)&s, sizeof(s));
        std::cout << std::setw(20) << s.name << std::setw(20) << s.id << std::setw(8) << s.depart << std::setw(20) << s.address << std::endl;
    }
	in_file.close();
	return 0;    
}
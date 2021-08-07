//5. Write a program for transaction processing that write and read object randomly to and from a random access file so that user 
//can add, update, delete and display the account information (accountnumber, lastname, firstname, totalbalance).
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdio>
struct Account {
	std::string acc_no, first_name, last_name, balance;
};
void add_data() {
	char choice;
	std::ofstream out_file("data.txt", std::ios::app);
	do {
		Account a;
		std::cout << "Enter account number: \n";
		std::cin >> a.acc_no;
		std::cout << "Enter Full Name \n";
		std::cin >> a.first_name >> a.last_name;
		std::cout << "Enter total balance\n";
		std::cin >> a.balance;
		out_file.write((char*)&a, sizeof(a));
		std::cout << "Enter more records? (Y/N)\n";
		std::cin >> choice;
	} while(choice == 'y' || choice == 'Y');
	out_file.close();
}
void display() {
	std::ifstream in_file("data.txt");
	std::cout << std::left;
	std::cout << std::setw(25) << "Account Number" << std::setw(20) << "F Name" << std::setw(20) << "L Name" << std::setw(20) << "Balance" << std::endl;
	while (!in_file.eof()) {
        Account a;
        in_file.read((char*)&a, sizeof(a));
        std::cout << std::setw(25) << a.acc_no << std::setw(20) << a.first_name << std::setw(20) << a.last_name << std::setw(20) << a.balance << std::endl;
    }
	in_file.close();
}
void delete_data(const std::string& first_name, const std::string& last_name) {
	std::ofstream out_file;
	out_file.open("temp.txt");
	std::ifstream in_file("data.txt");
	while (!in_file.eof()) {
        Account a;
        in_file.read((char*)&a, sizeof(a));
        if(a.first_name == first_name && a.last_name == last_name) continue;
        out_file.write((char*)&a, sizeof(a));
    }
	in_file.close(); out_file.close();
	std::remove("data.txt"); std::rename("temp.txt", "data.txt");
}
void update_data(const Account& acc) {
	char choice;
	std::ofstream out_file("temp.txt");
	std::ifstream in_file("data.txt");
	while (!in_file.eof()) {
        Account a;
        in_file.read((char*)&a, sizeof(a));
        if(a.first_name == acc.first_name && a.last_name == acc.last_name)
        	a = acc;
        out_file.write((char*)&a, sizeof(a));
    }
	in_file.close(); out_file.close();
	std::remove("data.txt"); std::rename("temp.txt", "data.txt");
}
int main() {
	char choice;
	std::cout << "1.Add Data\n2.Display\n3.Update\n4.Delete\n";
	std::cin >> choice;
	switch(choice)	{
		case '1':{
			add_data();
		} break;
		case '2':{
			display();
		} break;
		case '3':{
			std::cout << "Enter the full name of the person who's data is to be updated\n";
			Account a;
			std::cin >> a.first_name >> a.last_name;
			std::cout << "Enter account\n";
			std::cin >> a.acc_no;
			std::cout << "Enter total balance\n";
			std::cin >> a.balance;
			update_data(a);
		} break;
		case '4':{
			std::cout << "Enter the full name of the person who's data is to be deleted\n";
			std::string s1,s2;
			std::cin >> s1 >> s2;
			delete_data(s1, s2);
		} break;
		default:	std::cout << "Unhandled input\n";
	}
	return 0;    
}
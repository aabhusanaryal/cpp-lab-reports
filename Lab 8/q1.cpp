//1. Write a program to demonstrate the use of different ios flags and functions to format the output. 
//Create a program to generate the bill invoice of a department store by using different formatting.
#include <iostream>
#include <iomanip>
#include <ios>
#include <vector>
struct Item {
	std::string name;
	int quantity, price;
};
void line_break(int w) {
	std::cout << std::setw(w * 2) << std::setfill('-') << '\n' << std::setfill(' ');
}
int main() {
	std::vector <Item> items;
	int name_width  = 25;
    int quantity_width = 15;
    int price_width = 15;
	int total_width = name_width + quantity_width + price_width;
	char choice;
	do {
		Item item;
		std::cout << "What would you like to buy?\n";
		std::cin >> item.name;
		std::cout << "Price?\n";
		std::cin >> item.price;
		std::cout << "Quantity?\n";
		std::cin >> item.quantity;
		items.push_back(item);
		std::cout << "Would you like to buy more?\n";
		std::cin >> choice;
	} while(choice == 'y' || choice == 'Y');
	line_break(total_width);
	std::cout << std::setw(total_width * 1.25) << "Aryal Depart Store\n";
	line_break(total_width);
 	std::cout << "| " << std::setw(name_width) << "Name" << std::setw(name_width) << "|";
    std::cout << " " << std::setw(quantity_width) << "Quantity" << std::setw(quantity_width) << "|";
    std::cout << " " << std::setw(price_width) << "Price" << std::setw(price_width * 0.75) << "|\n";
    line_break(total_width);
    float total_price = 0;
	for(int i = 0; i < items.size(); ++i) {
        std::cout << "| " << std::setw(name_width) << items[i].name << std::setw(name_width) << "|";
        std::cout << " " << std::setw(quantity_width) << items[i].quantity << std::setw(quantity_width) << "|";
        std::cout << " " << std::setw(price_width) << items[i].price << std::setw(price_width * 0.75) << "|\n";
        total_price += items[i].price * items[i].quantity;
	}
	line_break(total_width);
	std::cout << std::setw(total_width * 1.83) << "Total Price = " << total_price << std::endl;
	line_break(total_width);
}
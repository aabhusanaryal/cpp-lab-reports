//Write a program that has a class with a dynamically allocated character array as its data member. 
//One object should contain "Engineers are" and another should contain " Creatures of logic".
// Member function join() should concatenate two strings by passing two objects as arguments.
// Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. 
//Also, write a destructor to free the allocated memory for the character array. Make your own function for concatenation of two strings.
#include <iostream>
class String{
	char* m_str;
	int m_len;
	int string_length(const char* str){
		const char* res = str;
		for(; *res != '\0'; res++);
		return (int)(res - str);
	}
	void string_concatinate(char* destination, char* source1, char* source2){
		while (*source1 != '\0') *destination++ = *source1++;
		while (*source2 != '\0') *destination++ = *source2++;
		*destination = '\0';
	}
	void string_copy(char* destination, const char* source){
		while ((*destination++ = *source++) != '\0');
	}
	public:
	String(const char* str){
		m_len = string_length(str);
		m_str = new char[m_len + 1]();
		string_copy(m_str, str);
	}
	~String(){
		delete[] m_str;
	}
	char* get_string(){
		return m_str;
	}
	void join(char* destination, char* source){
		string_concatinate(destination, m_str, source);
	}
	void display(){
		std::cout << m_str << std::endl;	
	}
};
int main(){
	String str1("Engineers are");
	String str2(" Creatures of logic");
	char dest[50] = {0};
	str1.join(dest, str2.get_string());
	String str3(dest);
	str3.display();
}
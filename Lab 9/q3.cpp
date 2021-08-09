//3. Modify the stack class given in the previous lab to add the exception when user tries to add item while the stack is full and when user tries to add item while the stack is empty. Throw exception in both of the cases and handle these exceptions.
#include <iostream>
template <class T>
class Stack {
	private:
	T st[100];
	int top;
	public:
	Stack() : top(-1) {}
	void push(T var) {
		try {
			if(top >= 100) throw "Exceeded Stack Size\n";
			st[++top]=var;
		}
		catch(const char* err) {
			std::cerr << "[ERROR]: " << err;
		}
	}
	T pop() {
		try {
			if(top < 0) throw "Tried to pop an empty stack\n";
			return st[top--];
		}
		catch(const char* err) {
			std::cerr << "[ERROR]: " << err;
			return 0;
		}
	}
};
int main() {
	Stack<float> s1;
	s1.pop();
	s1.push(111.1F); s1.push(222.2F); s1.push(333.3F);
	std::cout<<"1 : " << s1.pop() << std::endl;
	std::cout<<"2 : " << s1.pop() << std::endl;
	std::cout<<"3 : " << s1.pop() << std::endl;
	Stack<int> s2;
	s2.push(123); s2.push(234); s2.push(345);
	std::cout << "1 : " << s2.pop() << std::endl;
	std::cout << "2 : " << s2.pop() << std::endl;
	std::cout << "3 : " << s2.pop() << std::endl;
	return 0;
}
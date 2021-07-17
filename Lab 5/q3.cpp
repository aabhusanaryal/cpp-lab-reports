//3. Compare the two object that contains integer values that demonstrate the overloading of equality (==), less than (<), greater than (>), not equal (!=),greater than or equal to (>=) and less than or equal to(<=) operators.
#include <iostream>
class Numbers{
	int a;
	public:
	Numbers(): a(0) {}
	Numbers(int a): a(a){}
	bool operator==(const Numbers& n){
		return (this->a == n.a);
	}
	bool operator>(const Numbers& n){
		return (this->a > n.a);
	}
	bool operator<(const Numbers& n){
		return (this->a < n.a);
	}
	bool operator>=(const Numbers& n){
		return (*this > n) || (*this == n);
	}
	bool operator<=(const Numbers& n){
		return (*this < n) || (*this == n);
	}
	bool operator!=(const Numbers& n){
		return !(*this == n);
	}
};
int main(){
	Numbers n1(1), n2(2);
	std::cout << std::boolalpha;
	std::cout << "n1 < n2 " << (n1 < n2) << std::endl;
	std::cout << "n1 == n2 " << (n1 == n2) << std::endl;
	std::cout << "n1 <= n2 " << (n1 <= n2) << std::endl;
	std::cout << "n1 >= n2 " << (n1 >= n2) << std::endl;
	std::cout << "n1 != n2 " << (n1 != n2) << std::endl;
	return 0;
}
//1.Create a function called sum ( ) that returns the sum of the elements of an array. Make this function into a template so it will work with any numerical type. 
//Write a main ( ) program that applies this function to data of various type.
#include <iostream>
#define COUNT(arr) ((sizeof((arr)))/(sizeof((arr[0]))))
template <typename T>
T sum(T* arr, size_t n)
{
	T sm = 0;
	for(size_t i = 0; i < n; i++)
		sm += arr[i];
	return sm;
}
int main()
{
	int i_nums[] = {1,2,3,4,5,6,7,8,9};
	float f_nums[] = {2.f, 3.f, 4.f, 6.f, 7.f, 8.f, 11.f };
	std::cout << "Float sum: " << sum(f_nums, COUNT(f_nums)) << std::endl;
	std::cout << "int sum: " << sum(i_nums, COUNT(i_nums)) << std::endl;
	return 0;
}
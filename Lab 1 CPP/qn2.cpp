///*
//Write a program using the function overloading that converts feet to inches. 
//Use function with no argument, one argument and two arguments. 
//Decide yourself the types of arguments. Use pass by reference in any one of the function above.
//*/
//#include<iostream>
//
//float feet(float f, float i)
//{
//	return (f * 12 + i);
//}
//
//void feet()
//{
//	float feet;
//	std::cout << "Enter the feets:" << std::endl;
//	std::cin >> feet;
//	std::cout << feet * 12 << " inches." << std::endl;
//}
//
//float feet(float ref)
//{
//	return (ref * 12);
//}
//
//int main()
//{
//	feet();
//	float f, inc;
//	std::cout << "Enter the feets" << std::endl;
//	std::cin >> f;
//	std::cout << "Enter the inches" << std::endl;
//	std::cin >> inc;
//	float& ref = f;
//	float result = feet(f, inc);
//	std::cout << result << std::endl;
//	float res = feet(ref);
//	std::cout << "from reference " << res << std::endl;
//}
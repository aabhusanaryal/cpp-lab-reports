//Write a program that illustrate the following relationship and comment the relationships. 
//i) const_object.non_const_mem_function
//ii) const_object.const_mem_function
//iii) non_const_object.non_const_mem_function
//iv) non_const_object.const_mem_function
#include <iostream>
class Test{
	int data;
	public:
	Test(int data): data(data){}
	int const_get_data() const {
		return data;
	}
	int get_data(){
		return data;
	}
};
int main(){
	const Test const_obj(5);
	Test non_const_obj(10);
	std::cout <<"const_obj.const_fn " << const_obj.const_get_data() << "\n";
	//const_obj.get_data(); //can't be called
	std::cout <<"non_const_obj.const_fn " << non_const_obj.const_get_data() << "\n";
	std::cout <<"non_const_obj.non_const_fn " << non_const_obj.get_data() << "\n";
	return 0;
}
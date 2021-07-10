#include <iostream>

class illustration{
    private:
        int a;
    public:
        illustration(int num):a(num){}
        int non_const_fun(){
            a+=2;
            return a;
        }
        int const_fun()const{
            return a;
        }
};

int main(){
    illustration non_const_obj(2);
    const illustration const_obj(3);
    //std::cout<<"const_obj.non_const_fun():"<<const_obj.non_const_fun();
    std::cout<<"const_obj.const_fun():"<<const_obj.const_fun()<<std::endl;
    std::cout<<"non_const_obj.non_const_fun():"<<non_const_obj.non_const_fun()<<std::endl;
    std::cout<<"non_const_obj.const_fun():"<<non_const_obj.const_fun()<<std::endl;
    return 0;
}
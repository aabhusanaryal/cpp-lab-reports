#include<iostream>
namespace Square{
    int num;
    int fun(int a){
        return a*a;
    }
}
namespace Cube{
    int num;
    int fun(int a){
        return a*a*a;
    }
}
int main(){
    Square::num=3;
    Cube::num=4;
    std::cout<<"Cube of square namespace num="<<Cube::fun(Square::num)<<std::endl;
    std::cout<<"Cube of square namespace num="<<Square::fun(Cube::num)<<std::endl;
    return 0;
}
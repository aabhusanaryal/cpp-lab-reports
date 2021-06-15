#include<iostream>

float increment(float salary,float percent=12){
    return (salary+salary*(percent/100.0f));
}
int main(){
    std::cout<<"New salary for Information officer="<<increment(25000,10)<<std::endl;
    std::cout<<"New salary for System Analyst="<<increment(24000)<<std::endl;
    std::cout<<"New salary for Programmer="<<increment(18000)<<std::endl;
    std::cout<<"New salary for CEO="<<increment(35000,9)<<std::endl;
}
#include<iostream>
inline float net(float salary){
    return (salary-0.1f*salary);
}
int main(){
    float sal;
    std::cout<<"Enter salary:";
    std::cin>>sal;
    std::cout<<"Net="<<net(sal);
    return 0;
}
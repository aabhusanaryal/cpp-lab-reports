#include<iostream>
float& greater_temp(float &one, float& two){
    float greatest;
    if(one>two){
        return one;
    }
    else if(two>one){
        return two;
    }
}

int main(){
    float one_m,two_m;
    one_m=67;
    two_m=69;
    std::cout<<"Enter value to set to larger temp:";
    std::cin>>greater_temp(one_m,two_m);
    std::cout<<two_m;
    return 0;
}
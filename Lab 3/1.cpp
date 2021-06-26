#include<iostream>
class Celsius{
    private:
        float cel;
    public:
        void set(float celsius){
            cel=celsius;
        }
        float toFahrenheit(){
            return (cel*(9.0f/5.0f)+32.0f);
        }
};
class Fahrenheit{
    private:
        float far;
    public:
        void set(float fahr){
            far=fahr;
        }
        float toCelsius(){
            return ((far-32.0f)*5.0f/9.0f);
        }
};

int main(){
    Celsius a;
    Fahrenheit b;
    float c,d;
    std::cout<<"Enter celsius:";
    std::cin>>c;
    a.set(c);
    std::cout<<"In fahrenheit="<<a.toFahrenheit()<<std::endl;
    std::cout<<"Enter fahrenheit:";
    std::cin>>d;
    b.set(d);
    std::cout<<"In Celsius="<<b.toCelsius()<<std::endl;
    return 0;

}
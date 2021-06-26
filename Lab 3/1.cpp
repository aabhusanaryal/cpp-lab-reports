#include<iostream>
using namespace std;

class Celsius{
    private:
        float c;
    public:
        void set(float temp) {c=temp;}
        float toFahrenheit() {return (c*(9.0f/5.0f)+32.0f);}
};
class Fahrenheit{
    private:
        float f;
    public:
        void set(float temp) {f=temp;}
        float toCelsius() {return ((f-32.0f)*5.0f/9.0f);}
};

int main(){
    Celsius t1;
    Fahrenheit t2;
    float c1,f1;
    std::cout<<"Enter celsius:";
    std::cin>>c1;
    t1.set(c1);
    cout<<"In fahrenheit="<<t1.toFahrenheit()<<endl;
    cout<<"Enter fahrenheit:";
    cin>>f1;
    t2.set(f1);
    cout<<"In Celsius="<<t2.toCelsius()<<endl;
    return 0;
}
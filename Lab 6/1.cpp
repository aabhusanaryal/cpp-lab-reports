#include<iostream>
#include<math.h>
class Distance{
    private:
        float m,cm;
    public:
        void getter(){
            std::cout<<"Enter m and cm for distance object:";
            std::cin>>m>>cm;
        }
        Distance():m(0),cm(0){}
        Distance(float n){
            cm=(n*100);
            cm=fmod(cm,100);
            m=n-cm/100;
        }
        operator float(){
            float metre;
            metre=m+(cm/100);
            return metre;
        }
        void display(){
            std::cout<<"In distance object Metres="<<m<<" CM="<<cm<<std::endl;
        }
};
int main(){
    Distance one;
    float f;
    one.getter();
    f=one;
    std::cout<<"Total metres="<<f<<std::endl;
    std::cout<<"Enter in metres:";
    std::cin>>f;
    one=f;
    one.display();
    return 0;
}
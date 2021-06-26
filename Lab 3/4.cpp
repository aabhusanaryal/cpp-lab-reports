#include<iostream>
#include<cmath>
#define PI 3.1415f

const float pi=3.14159265;
class triangle{
    private:
        float s1,s2,s3;
    public:
        void set_sides(float a,float b,float c){
            s1=a;
            s2=b;
            s3=c;
        }
        int peri(){
            return s1+s2+s3;
        }
        float area(){
            float s=peri()/2.f;
            return sqrt(s*(s-s1)*(s-s2)*(s-s3));
        }
};

class rectangle{
    private:
        float length, breadth;
    public:
        void set_lb(float l, float b){
            length=l;
            breadth=b;
        }
        int peri(){
            return 2*(length+breadth);
        }
        float area(){
            return length*breadth;
        }
};

class circle{
    private:
        float radius;
    public:
        void set_radius(float r){
             radius=r;
        }
        float peri(){
            return (2*pi*radius);
        }
        float area(){
            return (pi*radius*radius);
        }

};

int main(){
    triangle a;
    rectangle b;
    circle c;
    float s1,s2,s3,length,breadth,r;
    std::cout<<"Enter 3 sides of triangle:";
    std::cin>>s1>>s2>>s3;
    a.set_sides(s1,s2,s3);
    std::cout<<"Perimeter and area of triangle="<<a.peri()<<" and "<<a.area()<<std::endl;
    std::cout<<"Enter length and breadth of rectangle:";
    std::cin>>length>>breadth;
    b.set_lb(length,breadth);
    std::cout<<"Perimeter and area of rectangle="<<b.peri()<<" and "<<b.area()<<std::endl;
    std::cout<<"Enter radius of circle:";
    std::cin>>r;
    c.set_radius(r);
    std::cout<<"Perimeter and area of circle="<<c.peri()<<" and "<<c.area()<<std::endl;

}

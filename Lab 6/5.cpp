#include<iostream>
class complex1{
    public:
        float real1,img1;
        complex1(float a,float b):real1(a),img1(b){}
        void display(){
            std::cout<<"Base Class:";
            std::cout<<real1<<"+("<<img1<<"i)"<<std::endl;
        }
};
class complex2:complex1{
    private:
        float real2,img2;
    public:
        complex2(float a,float b,complex1 c):real2(a),img2(b),complex1(c){}
        void add(){
            real2+=real1;
            img2+=img1;
        }
        void display(){
            std::cout<<"Derived class:";
            std::cout<<real2<<"+("<<img2<<"i)"<<std::endl;
        }
        friend class complex3;
};
class complex3{
    private:
        float real3,img3;
    public:
        complex3(float a,float b):real3(a),img3(b){}
        void sub(complex2 c){
            real3=c.real1-real3;
            img3=c.img1-img3;
        }
        void display(){
            std::cout<<"Friend class:";
            std::cout<<real3<<"+("<<img3<<"i)"<<std::endl;
        }
};
int main(){
    float r,i;
    std::cout<<"Enter real and img for base:";
    std::cin>>r>>i;
    complex1 a(r,i);
    std::cout<<"Enter real and img for derived:";
    std::cin>>r>>i;
    complex2 b(r,i,a); //setting a as base for b
    std::cout<<"Enter real and img for friend:";
    std::cin>>r>>i;
    complex3 c(r,i);

    a.display();
    b.display();
    c.display();

    b.add();
    std::cout<<"Base+Derived:"<<std::endl;
    b.display();

    c.sub(b); //using b's base to subtract
    std::cout<<"Base-Friend:"<<std::endl;
    c.display();
    
    return 0;
}
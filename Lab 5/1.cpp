#include<iostream>
class cartesianB;
class one;
class cartesianA{
    private:
        float x,y;
    public:
        cartesianA(int one,int two):x(one),y(two){}
        void add(cartesianA, cartesianB );
        friend void sub(cartesianA,cartesianB);
        friend void mult(cartesianA,cartesianB,float);
        friend void div(cartesianA,cartesianB,float);
        void display(){
            std::cout<<"A=("<<x<<","<<y<<")"<<std::endl;
        }
        friend class one; //class one's mem function is now friend of cartesianA
};
class cartesianB{
    private:
        float x,y;
    public:
        cartesianB(int one,int two):x(one),y(two){}
        friend void cartesianA::add(cartesianA,cartesianB);
        friend void sub(cartesianA,cartesianB);
        friend void mult(cartesianA,cartesianB,float); 
        friend void div(cartesianA,cartesianB,float);
        void display(){
            std::cout<<"B=("<<x<<","<<y<<")"<<std::endl;
        }
};
class one{
    private:
        int x;
    public:
        one(int a):x(a){}
        void demo(cartesianA b){ //can access b.x as this function is friend of cartesianA
            std::cout<<"Sum of x of 'one' object and x of 'cartesianA'="<<x+b.x;
        }
};
void cartesianA::add(cartesianA a, cartesianB b){
    std::cout<<"Sum:"<<std::endl;
    std::cout<<"X="<<a.x+b.x<<std::endl;
    std::cout<<"Y="<<a.y+b.y<<std::endl;
}
void sub(cartesianA a,cartesianB b){
    std::cout<<"Diff:"<<std::endl;
    std::cout<<"X="<<a.x-b.x<<std::endl;
    std::cout<<"Y="<<a.y-b.y<<std::endl;
}
void mult(cartesianA a,cartesianB b,float scalar){
    std::cout<<"Mult:"<<std::endl;
    std::cout<<"A after multiplying by scalar=("<<a.x*scalar<<","<<a.y*scalar<<")"<<std::endl;
    std::cout<<"B after multiplying by scalar=("<<b.x*scalar<<","<<b.y*scalar<<")"<<std::endl;
}
void div(cartesianA a,cartesianB b,float scalar){
    std::cout<<"Div:"<<std::endl;
    std::cout<<"A after dividing by scalar=("<<a.x/scalar<<","<<a.y/scalar<<")"<<std::endl;
    std::cout<<"B after dividing by scalar=("<<b.x/scalar<<","<<b.y/scalar<<")"<<std::endl;
}
int main(){
    cartesianA a(1,2);
    cartesianB b(2,3);
    one z(1); 
    a.display();
    b.display();
    a.add(a,b);
    sub(a,b);
    mult(a,b,2);
    div(a,b,3);
    //accessing private member of cartesianA through member function of object of one
    z.demo(a); //adds 1 to a.x
    return 0;
}

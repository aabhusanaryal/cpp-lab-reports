#include<iostream>
class points{
    private:
       float x,y,z;
    public:
        points(float a,float b,float c):x(a),y(b),z(c){}
        friend points operator+(points,points);
        friend points operator-(points,points);
        void display(){
            std::cout<<"("<<x<<","<<y<<","<<z<<")"<<std::endl;
        }
};
points operator+(points a,points b){
    return points(a.x+b.x,a.y+b.y,a.z+b.z);
}
points operator-(points a,points b){
    return points(a.x-b.x,a.y-b.y,a.z-b.z);
}
int main(){
    points one(1,2,3),two(3,4,5);
    std::cout<<"Points are:"<<std::endl;
    one.display();
    two.display();
    std::cout<<"Addition:\n";
    (one+two).display();
    std::cout<<"Subtraction:\n";
    (one-two).display();
    return 0;
}


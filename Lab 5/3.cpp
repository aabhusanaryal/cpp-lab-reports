#include<iostream>
#include<iomanip>
class random{
    private:
        int x;
    public:
        random(int n):x(n){}
        bool operator==(random b){
            return x==b.x;
        }
        bool operator<(random b){
            return x<b.x;
        }
        bool operator>(random b){
            return x>b.x;
        }
        bool operator!=(random b){
            return x!=b.x;
        }
        bool operator>=(random b){
            return x>=b.x;
        }
        bool operator<=(random b){
            return x<=b.x;
        }
        int display(){
            return x;
        }

};
int main(){
    random a(3),b(4);
    std::cout<<std::boolalpha;
    std::cout<<"a.x="<<a.display()<<"\nb.x="<<b.display()<<std::endl;
    std::cout<<std::setw(6)<<"a==b: "<<(a==b)<<std::endl;
    std::cout<<std::setw(6)<<"a<b: "<<(a<b)<<std::endl;
    std::cout<<std::setw(6)<<"a>b: "<<(a>b)<<std::endl;
    std::cout<<std::setw(6)<<"a!=b: "<<(a!=b)<<std::endl;
    std::cout<<std::setw(6)<<"a>=b: "<<(a>=b)<<std::endl;
    std::cout<<std::setw(6)<<"a<=b: "<<(a<=b)<<std::endl;
    return 0;
}
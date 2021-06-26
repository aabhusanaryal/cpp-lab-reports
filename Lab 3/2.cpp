#include<iostream>
#include<cmath>
class Prime{
    public:
        int number;
        int primeOrNot(){
            for(int i=2;i<=sqrt(number);i++){
                if(number%i==0){
                    std::cout<<"It is Composite\n";
                    return 0;
                }
            }
            std::cout<<"It is Prime\n";
            return 0;
        }
};

int main(){
    Prime n;
    char check;
    do{
        std::cout<<"Enter number:";
        std::cin>>n.number;
        n.primeOrNot();
        std::cout<<"Continue?(Y/N)"<<std::endl;
        std::cin>>check;
    }while(check=='y' || check=='Y');
    return 0;
}
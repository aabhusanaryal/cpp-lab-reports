#include<iostream>

class numbers{
    private:
        static int sno;
        int sn;
    public:
        numbers(){
            sno++;
            sn=sno;
        }
        void show_sn(){
            std::cout<<sn<<std::endl;
        }
        static void total(){
            std::cout<<"Total objects curently="<<sno<<std::endl;
        }
};

int numbers::sno=0;
int main(){
    numbers a,b;
    numbers::total();
    a.show_sn();
    b.show_sn();
    numbers c;
    numbers::total();
    return 0;
}

#include<iostream>

class carPark{
    private:
        int carid;
        int charge;
        float time;
    public:
        void set_carid(int cid){
            carid=cid;
        }
        void set_charge(int ch){
            charge=ch;
        }
        void set_time(float t){
            time=t;
        }
        void show_charge(){
            std::cout<<"Car ID:"<<carid<<"\nCharges/Hour="<<charge<<"\nParked Hours="<<time<<"\n";
            std::cout<<"Total Charge="<<time*charge<<std::endl;
        }
};

int main(){
    carPark a;
    a.set_carid(1);
    a.set_charge(500);
    a.set_time(1.2);
    a.show_charge();
}
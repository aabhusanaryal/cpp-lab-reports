#include<iostream>

class parking{
    private:
        int num_vehicle;
        float hr,rate;
    public:
        parking(int n,float h,float r){
            num_vehicle=n;
            hr=h;
            rate=r;
            if(num_vehicle>10)
                rate-=rate*0.1;
        }
        parking(parking &a){
            num_vehicle=a.num_vehicle;
            hr=a.hr;
            rate=a.rate;
        }
        void total_charge(){
            std::cout<<"Total charge for "<<hr<<" hrs at Rs "<<rate<<"= Rs "<<hr*rate;
        }

};

int main(){
    parking a(11,3.5,10);
    parking b(a);
    b.total_charge();
    return 0;
}
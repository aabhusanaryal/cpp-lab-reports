#include <iostream>
int month31[]={1,3,5,7,8,10,12};
class Date{
    private:
        int dd,mm,yy,leapYear;
    public:
        Date(int d,int m,int y):dd(d),mm(m),yy(y){
            if(yy%4==0)
                if(yy%100==0)
                    if(yy%400==0)
                        leapYear=1;
                    else
                        leapYear=0;
                else
                    leapYear=1;
            else
                leapYear=0;
        }
        void display(){
            std::cout<<dd<<"/"<<mm<<"/"<<yy<<std::endl;
        }
        Date operator++(){
            ++dd;
            if(dd>28)
                setDate();
            return *this;
        } 
        Date operator++(int){
            Date temp= *this;
            dd++;
            if(dd>28)
                setDate();
            return temp;
        }
        void setDate(){
            int is31=0;
            for(int i=0;i<7;i++){
                if(mm==month31[i]){
                    is31=1;
                    break;
                }
            }
            if(is31==1){
               if(dd>31){
                dd%=31;
                mm+=1; 
               }
            }
            else if(mm==2){
                if(leapYear==1){
                    if(dd>29){
                        dd%=29;
                        mm+=1;
                    }
                }
                else{
                    dd%=28;
                    mm+=1;
                }
            }
            else{
                if(dd>30){
                    dd%=30;
                    mm+=1;
                }
            }
            if(mm>12){
                mm%=12;
                yy+=1;
            }
        }
};
int main(){
    Date one(26,2,2007);
    one.display();
    (++one).display();
    (one++).display();
    one.display();
    (++one).display();
    (++one).display();
    return 0;
}
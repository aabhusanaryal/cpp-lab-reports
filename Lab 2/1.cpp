#include<iostream>
struct date{
    int day,month,year;
};
int date_return(struct date a){
    std::cout<<a.month<<"/"<<a.day<<"/"<<a.year<<std::endl;
    return 0;
}
int main(){
    struct date a={28,11,2044};
    date_return(a);
    return 0;
}
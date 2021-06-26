#include<iostream>

class empReport{
    private:
        int empid,year;
        float bonus,overtime;
    public:
        void setpara(int id,float b,float ovt,int y){
            empid=id;
            bonus=b;
            overtime=ovt;
            year=y;
        }
        void displayreport(){
            std::cout<<"Employee with id "<<empid<<" has received Rs."<<bonus<<" as bonus and had worked "<<overtime<<" hours as overtime in year "<<year<<std::endl;

        }
};

int main(){
    int n,id,y;
    float b,ovt;
    std::cout<<"Number of employees:";
    std::cin>>n;
    empReport* emp=new empReport[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter id, bonus amount,overtime hours, and year:";
        std::cin>>id>>b>>ovt>>y;
        emp[i].setpara(id,b,ovt,y);
    }
    for(int i=0;i<n;i++){
        emp[i].displayreport();
    }

    delete[] emp;
    return 0;
}
#include<iostream>
#include<cstring>
class dept{
    private:
        int deptid;
        const char* deptname;
    public:
        dept(int a,const char* b){
            std::cout<<"Constructor Invoked"<<std::endl;
            deptid=a;
            deptname=b;
            std::cout<<"Dept ID set to:"<<deptid<<std::endl;
            std::cout<<"Dept Name set to:"<<deptname<<std::endl;
        }
        ~dept(){
            std::cout<<"Destructor for deptid "<<deptid<<" invoked!"<<std::endl;
        }
};

int main(){
    dept a(1,"Sales"),b(2,"Sales");
    return 0;
}
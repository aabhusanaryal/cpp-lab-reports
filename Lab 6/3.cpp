#include<iostream>
class Musicians{
    private:
        std::string a[5];
    public:
        void string(){
            std::string b[]={"veena", "guitar", "sitar", "sarod","mandolin"};
            for(int i=0;i<5;i++){
                a[i]=b[i];
            }
            display();
        }
        void wind(){
            std::string b[]={"flute", "clarinet", "saxophone", "nadhaswaram", "piccolo"};
            for(int i=0;i<5;i++){
                a[i]=b[i];
            }
            display();
        }
        void perc(){
            std::string b[]={"tabla", "mridangam", "bangos", "drums", "tambour"};
            for(int i=0;i<5;i++){
                a[i]=b[i];
            }
            display();
        }
        void display(){
            for(int i=0;i<5;i++){
                std::cout<<a[i]<<std::endl;
            }
        }
};
class TypeIns:Musicians{
    public:
        void get(){
            std::cout<<"a. String Instruments\nb. Wind Instruments\nc. Percussion Instruments\n";    
            show();
        }
        void show(){
            char choice;
            std::cout<<"Enter choice:";
            std::cin>>choice;
            switch(choice){
                case 'a':string();break;
                case 'b':wind();break;
                case 'c':perc();break;
                default:std::cout<<"Wrong choice";
            }
        }
};
int main(){
    TypeIns a;
    a.get();
    return 0;
}
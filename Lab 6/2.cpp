#include<iostream>
#include<cmath>

class feet_inch;
class m_cm{
    private:
        float m,cm;
    public:
        m_cm(float metre,float centi):m(metre),cm(centi){}
        m_cm(feet_inch);
        float get_m(){return m;}
        float get_cm(){return cm;}
        void display(){
            std::cout<<"In M and CM:\nM="<<m<<" CM="<<cm<<std::endl;
        }
};

class feet_inch{
    private:
        float feet,inch;
    public:
        feet_inch(float f,float i):feet(f),inch(i){}
        feet_inch(m_cm a){
            float m=a.get_m()+(a.get_cm()/100);
            feet=m*3.28084;
            inch=feet*12;
            inch=fmod(inch,12);
            feet=feet-inch/12;
        }
        float get_feet(){return feet;}
        float get_inch(){return inch;}
        void display(){
            std::cout<<"In Feet and Inch:\nFt="<<feet<<" Inch="<<inch<<std::endl;
        }
};

m_cm::m_cm(feet_inch a){
    float feet=a.get_feet()+(a.get_inch()/12);
    m=feet*0.3048;
    cm=m*100;
    cm=fmod(cm,100);
    m=m-cm/100;       
}

int main(){
    m_cm a(1,25);
    a.display();
    feet_inch b=a;
    b.display();

    feet_inch c(5,6);
    c.display();
    m_cm d=c;
    d.display();

    return 0;
}
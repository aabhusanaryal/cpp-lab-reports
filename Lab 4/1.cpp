#include<iostream>
#include<iomanip>

class Time {
private:
    int hh, mm, ss;
public:
    Time():hh(0),mm(0),ss(0) {}
    Time(int hr, int min, int sec):hh(hr),mm(min),ss(sec){}
    Time add_time(Time one) {
        Time result;
        result.hh = one.hh + hh;
        result.mm = one.mm + mm;
        result.ss = one.ss + ss;
        if (result.ss >= 60) {
            result.mm += result.ss / 60;
            result.ss %= 60;
        }
        if (result.mm >= 60) {
            result.hh += result.mm / 60;
            result.mm %= 60;
        }
        if (result.hh >= 24)
            result.hh %= 24;
        return result;
    }

    void display_24() {
        std::cout << std::setfill('0') << std::setw(2) << hh << ":" << std::setfill('0') << std::setw(2) << mm << ":" << std::setfill('0') << std::setw(2) << ss << std::endl;
    }

    void display_12(){
        int hr=hh;
        char *ampm=(char*)"AM";
        ampm=(hh>=12)?(char*)"PM":(char*)"AM";
        if(hh>12 || hh==0)
            hr=abs(hh-12);
        std::cout << std::setfill('0') << std::setw(2) << hr << ":" << std::setfill('0') << std::setw(2) << mm << ":" << std::setfill('0') << std::setw(2) << ss <<" "<<ampm<< std::endl;
        }
};

int main() {
    Time t1(12, 25, 36), t2(13, 36, 20), result;
    result = t1.add_time(t2);
    std::cout<<"Time 1:\n12 hr:";
    t1.display_12();
    std::cout<<"24 hr:";
    t1.display_24();
    std::cout<<"Time 2:\n12 hr:";
    t2.display_12();
    std::cout<<"24 hr:";
    t2.display_24();
    std::cout<<"Result:\n12 hr:";
    result.display_12();
    std::cout<<"24 hr:";
    result.display_24();
    return 0;
}

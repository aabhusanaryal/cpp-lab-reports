//Write a program that has a class to represent time. The class should have constructors to initialize data members hour, 
//minute and second to 0 and to initialize them to values passed as arguments. The class should have member function to add 
//time objects and return the result as time object. There should be another function to display the result in 24 hour format.
#include <iostream>
#include <iomanip>
class Time{
	int m_hr, m_min, m_sec;
	public:
	Time(): m_hr(0), m_min(0), m_sec(0) {}
	Time(int hr,int min,int sec) : m_hr(hr), m_min(min), m_sec(sec) {}
	Time add_time(Time time){
		time.m_hr = (m_hr + time.m_hr) % 24;
		time.m_min = m_min + time.m_min;
		if(time.m_min > 59){
			time.m_hr += time.m_min / 60;
			time.m_min %= 60;
		}
		time.m_sec = m_sec + time.m_sec;
		if(time.m_sec > 59){
			time.m_min += time.m_sec / 60;
			time.m_sec %= 60;
		}
		return time;
	}
	void print_time_24(){
		std::cout << std::setfill('0') << std::setw(2) << m_hr % 24 << ":" << std::setw(2) << m_min << ":" << std::setw(2)<< m_sec << std::endl;
	}
	void print_time_12(){
		std::cout << std::setfill('0') << std::setw(2) << (m_hr % 12 ? m_hr % 12 : 12) << ":" << 
		std::setw(2) << m_min << ":" << std::setw(2) << m_sec << (m_hr < 12 || m_hr == 24? " am" : " pm") <<std::endl;
	}
};
int main(){
	Time time1(24, 00, 00), time2(12, 13, 45);
	Time time3 = time1.add_time(time2);
	time1.print_time_12();time1.print_time_24();
	time2.print_time_12();time2.print_time_24();
	time3.print_time_12();time3.print_time_24();
	return 0;
}
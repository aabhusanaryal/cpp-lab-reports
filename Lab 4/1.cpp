#include <iostream>

class Time
{
	int hr, min, sec;
public:
	
	Time() {hr = 0, min = 0, sec = 0;}
	
	Time(int h, int m, int s)
	{
		hr = h;
		min = m;
		sec = s;
	}

	Time add_time(Time temp)
	{
		Time return_time;
		return_time.hr = hr+temp.hr;
		return_time.min = min+temp.min;
		return_time.sec = sec+temp.sec;
		if (return_time.sec >= 60)
		{
			return_time.min += temp.sec/60 ;
			return_time.sec %= 60;
		}
		if (return_time.min >=60)
		{
			return_time.hr += return_time.min/60;
			return_time.min %= 60;
		}
		return_time.hr %= 24;
		return (return_time);
	}
	
	void displayTime()
	{
		displayTime24();
		displayTime12();
	}

	void displayTime24()
	{
		std::cout<<"In 24 hour format:"<<std::endl;
		std::cout<<"The time is- "<<
		hr<<":"<< min << ":"<< 
		sec<<std::endl;
	}

	void displayTime12()
	{
		std::cout<<"In 12 hour format:"<<std::endl;
		std::cout <<"The time is- "<<
		((hr%12 == 0) ? 12 : hr%12) <<":"<<min<<":"<<sec<<
		((hr>12) ? "PM":"AM")<<std::endl;
	}


};

int main()
{
	int hr, min, sec;

	std::cout<<"Enter the hour, minute and seconds:"<<std::endl;
	std::cin>>hr>>min>>sec;

	Time time1(hr, min, sec);
	Time time2(22, 22, 11);

	Time total = time2.add_time(time1);
	total.displayTime();
	return 0;
}

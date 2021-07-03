
//Write a simple program that convert the temperature in degree Celsius to degree Fahrenheit and vice versa using the basic concept of class and object. Make separate class for Centigrade and Fahrenheit which will have the private member to hold the temperature value and make conversion functions in each class for conversion from one to other. For example you will have function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.
#include <iostream>

class Celsius{
	public:
	float to_farenheit(){
		return 9.f/5.f * m_temperature + 32.f ; 
	}
	
	void set_temperature(float temp){
		m_temperature = temp;
	}
	
	float get_temperature(){
		return m_temperature;
	}
	
	private:
	float m_temperature;
};

class Farenheit{
	public:
	float to_celcius(){
		return 5.f/9.f * (m_temperature - 32.f); 
	}
	
	void set_temperature(float temp){
		m_temperature = temp;
	}
	
	float get_temperature(){
		return m_temperature;
	}
	
	private:
	float m_temperature;
};


int main(){
	Celsius celcius;
	Farenheit farenheit;
	float temp;
	std::cout << "Enter the temperature in celcius" << std::endl;
	std::cin >> temp;
	celcius.set_temperature(temp);
	farenheit.set_temperature(celcius.to_farenheit());
	std::cout << "The temperature in farenheit is " << farenheit.get_temperature()<< std::endl;
	std::cout << "The temperature in celcius back from farenheit is " << farenheit.to_celcius() << std::endl;
}
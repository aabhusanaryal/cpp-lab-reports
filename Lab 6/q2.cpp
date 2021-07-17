//2. Write two classes to store distances in meter-centimeter and feet-inch system respectively. 
//Write conversions functions so that the program can convert objects of both types.
#include <iostream>
class FPS;
class SI {
	int m;	float cm;
public:
	SI(float len = 0) : m(int(len)), cm((len - m) * 100.f) {}
	operator FPS() const;
	friend std::ostream& operator<<(std::ostream& stream, const SI& d) {
		stream << d.m << "m and " << d.cm << "cm";
		return stream;
	}
};
class FPS {
	int ft;	float in;
public:
	FPS(float len = 0) : ft(int(len)), in((len - ft) * 12.f) {}
	operator SI() const;
	friend std::ostream& operator<<(std::ostream& stream, const FPS& d) {
		stream << d.ft << "ft and " << d.in << "in";
		return stream;
	}
};
SI::operator FPS() const {	return FPS(((m * 100.f + cm) / 2.54f ) / 12.f);}
FPS::operator SI() const {	return SI(((ft  * 12.f + in) * 2.54f) * 100.f);}
int main() {
	SI m(15.555f);
	std::cout << m << std::endl;
	std::cout << (FPS)m << std::endl;
	return 0;
}
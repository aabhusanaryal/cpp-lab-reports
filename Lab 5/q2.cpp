
//2. Write a class to store x, y, and z coordinates of a point in three-dimensional space. 
//Using operator overloading, write friend functions to add, and subtract the vectors.
#include <iostream>
class Vec3i{
	int x,y,z;
	public:
	Vec3i(int x = 0, int y = 0, int z = 0): x(x), y(y), z(z) {}
	friend Vec3i operator+(Vec3i& a, Vec3i& b){
		return Vec3i(a.x + b.x, a.y + b.y, a.z + b.z);
	}
	friend Vec3i operator-(Vec3i& a, Vec3i& b){
		return Vec3i(a.x - b.x, a.y - b.y, a.z - b.z);
	}
	friend std::ostream& operator<<(std::ostream& stream, const Vec3i& vec){
		stream << vec.x << "," << vec.y << "," << vec.z;
		return stream;
	}
	friend std::istream& operator>>(std::istream& stream, Vec3i& vec){
		stream >> vec.x >> vec.y >> vec.z;
		return stream;
	}
};
int main(){
	Vec3i vec1, vec2;
	std::cout << "Enter Vec1 and Vec2\n";
	std::cin >> vec1 >> vec2;
	std::cout << "Addition " << (vec2 + vec1) << std::endl;;
	std::cout << "Subtraction "  << (vec1 - vec2) << std::endl;;
	return 0;
}
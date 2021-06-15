#include <iostream>

namespace Square {
    int num;
    int fun(int input) {
        return input **2;
    }
};
namespace Cube {
    int num;
    int fun(int input) {
        return input **3;
    }
};

int main() 
{
    Square::num = 3;
    Cube::num = 5;
    std::cout << Cube::fun(Square::num) << std::endl;
    std::cout << Square::fun(Cube::num) << std::endl;
}
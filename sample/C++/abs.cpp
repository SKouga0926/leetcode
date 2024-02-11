#include <iostream>
#include <cmath>

int main(void) {
    
    double a, b;

    std::cout << "数値を入力してください．" << std::endl;

    std::cout << "a : ";
    std::cin >> a;

    std::cout << "b : ";
    std::cin >> b;

    std::cout << "a, bの絶対値は" << abs(a-b) << std::endl;
}
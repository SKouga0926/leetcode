#include <iostream>
#include <cmath>
#include <cstdint>

double deg_to_rad(std::int32_t x) {

    double temp = x * (M_PI / 180.0);

    return temp;
}

int main(void) {

    std::int32_t x;

    std::cout << "数値を入力してください : ";
    std::cin >> x;

    std::cout << "xの弧度法表記は " << deg_to_rad(x) << std::endl; 

    return 0;
}
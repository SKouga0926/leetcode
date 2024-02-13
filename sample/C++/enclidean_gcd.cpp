#include <iostream>

unsigned int enclidean_gcd(unsigned int a, unsigned int b) {

    int quotient = 0;
    int remainder = 0;

    while (true) {
        
        quotient = a / b;
        remainder = a % b;

        if (remainder == 0) break;

        std::swap(a, b);

        b = remainder;
    }

    return b;
}

unsigned int lcm(unsigned int a, unsigned int b) {

    int gcd = enclidean_gcd(a, b);

    return (a * b) / gcd;
}

int main(void) {

    int a = 0;
    int b = 0;

    std::cout << "a : ";
    std::cin >> a;

    std::cout << "b : ";
    std::cin >> b;

    int gcd_a_b = enclidean_gcd(a, b);
    int lcm_a_b = lcm(a, b);

    std::cout << "gcd a and b : " << gcd_a_b << std::endl;
    std::cout << "lcm a and b : " << lcm_a_b << std::endl;

    return 0;
}
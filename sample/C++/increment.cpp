#include <iostream>

int main(void) {

    std::cout << "++i" << std::endl;

    for (int i = 0; i < 3; ++i) {

        std::cout << i << std::endl;
    }

    std::cout << "i++" << std::endl;

    for (int i = 0; i < 3; i++) {

        std::cout << i << std::endl;
    }

    return 0;
}

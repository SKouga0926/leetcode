#include <iostream>
#include <string>

int main(void) {

    std::cout << "好きな食べ物を入力してください：";
    std::string food;
    std::cin >> food;
    std::cout << "好きな食べ物は " << food << "です．" << std::endl;

    return 0;
}

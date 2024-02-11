#include <iostream>
#include <string>

int main(void) {

    std::string a, b;

    std::cout << "文字列を入力してください" << std::endl;

    std::cout << "a : ";
    std::cin >> a;

    std::cout << "b : ";
    std::cin >> b;

    std::cout << "a[1] : " << a[1] << std::endl;
    std::cout << "a[1] to a[end] : " << a.substr(1) << std::endl;
    std::cout << "a[1] to a[3] : " << a.substr(1, 4) << std::endl;

    std::cout << "a+b : " << a+b << std::endl;

    return 0;

}
#include <iostream>
#include <algorithm>
#include <cstdint>

int main(void) {

    std::cout << std::max({103, 168, 103}) << std::endl;

    int N = 0;
    int c[100] = {0};
    int min_x = INT32_MAX;

    std::cout << "要素数は何個ですか？ : ";
    std::cin >> N;

    for (int i = 0; i < N; i++) {

        std::cout << "c[" << i << "] : ";
        std::cin >> c[i];
    }

    for (int i = 0; i < N; i++) {

        min_x = std::min(min_x, c[i]);
    }

    std::cout << "min_x : " << min_x << std::endl;

    // min_element関数は最小値を探索するイテレータであり，引数には探索はじめと，探索したい範囲の次まで指す．
    // a[0]からa[4]まで探索したいなら引数には&a[0]と&a[5]を渡す必要がある．
    int* d;
    d = std::min_element(&c[0], &c[N]);
    std::cout << *d << std::endl;

    int* e;
    e = std::max_element(&c[0], &c[N]);
    std::cout << *e << std::endl;
}
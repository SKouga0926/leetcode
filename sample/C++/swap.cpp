#include <iostream>

int main(void) {

    int N = 0; 
    int c[10] = {0};

    std::cout << "N : ";
    std::cin >> N; 

    for (int i = 0; i < N; i++) {
        
        std::cout << "c[" << i << "] : ";
        std::cin >> c[i];
    }

    for (int i = 0; i < N; i++) {

        for (int j = i + 1; j < N; j++) {

            if (c[i] > c[j]) std::swap(c[i], c[j]);
        }
    }

    // output the bubblesorted arrangement    
    for (int i = 0; i < N; i++) {

        std::cout << "c[" << i << "] : ";
        std::cout << c[i] << std::endl;
    }

}
#include <iostream>

template<typename T>
class ForwardIterator {
private:
    T* m_ptr; // Pointer to hold the address

public:
    // Constructor
    ForwardIterator(T* ptr) : m_ptr(ptr) {}

    // Dereference operator
    T& operator*() const {
        return *m_ptr;
    }

    // Pre-increment operator
    ForwardIterator& operator++() {
        ++m_ptr;
        return *this;
    }

    // Post-increment operator
    ForwardIterator operator++(int) {
        ForwardIterator tmp = *this;
        ++m_ptr;
        return tmp;
    }

    // Comparison operators
    bool operator==(const ForwardIterator& other) const {
        return m_ptr == other.m_ptr;
    }

    bool operator!=(const ForwardIterator& other) const {
        return m_ptr != other.m_ptr;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    ForwardIterator<int> it(arr);

    // Accessing elements using the iterator
    for (; it != ForwardIterator<int>(&arr[5]); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

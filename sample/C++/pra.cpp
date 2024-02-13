#include <iostream>
#include <vector>

int main(void) {

    std::vector<int> nums1, nums2;

    nums1 = {1, 5, 3, 8};
    nums2 = {2, 7, 6, 4};
    
    int size_nums2 = nums2.size();

    for (int i = 0; i < size_nums2; i++) {

    nums1.push_back(nums2[i]);

    }

    int size_nums1 = nums1.size();

    for (int i = 0; i < size_nums1; i++) {

        std::cout << nums1[i] << std::endl;
    }

    return 0;
}
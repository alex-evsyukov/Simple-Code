// pointer arithmetic -- Арифметика указателей

#include <iostream>

int main()
{
    const int SIZE = 5;
    int arr[SIZE]{4, 55, 79, 1, 4};

    // std::cout << *(arr + 1) << std::endl;

    // std::cout << "=========" << std::endl;

    // for (int i = 0; i < SIZE; i++)
    // {
    //     std::cout << arr[i] << std::endl;
    // }

    // std::cout << "=========" << std::endl;
    int *pArr = arr;

    int (*p)[SIZE] = &arr;

    std::cout << pArr << std::endl;
    std::cout << p << std::endl;


    // std::cout << "arr\t" << arr << std::endl;
    // std::cout << "pArr\t" << pArr << std::endl;

    // std::cout << "=========" << std::endl;

    // for (int i = 0; i < SIZE; i++)
    // {
    //     std::cout << *(pArr + i) << std::endl;
    // }

    // std::cout << pArr << std::endl;
    // std::cout << *(pArr) << std::endl;
    // std::cout << *(pArr + 1) << std::endl;
    // std::cout << *(pArr + 2) << std::endl;
    // std::cout << *(pArr + 3) << std::endl;
    // std::cout << *(pArr + 4) << std::endl;

    return 0;
}
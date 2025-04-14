#include <iostream>

int main()
{
    int *pa = new int;
    *pa = 10;
    std::cout << pa << std::endl;
    std::cout << *pa << std::endl;
    delete pa; // с начала так
    pa = nullptr; // затем так
    delete pa;
    //std::cout << pa << std::endl;

    return 0;
}
// pointers -- указатели

#include <iostream>

int main()
{
    int a = 5, *px = &a, *px2 = &a;


    std::cout << "a\t" << a << std::endl;
    // std::cout << "size a\t" << sizeof(a) << std::endl;

    std::cout << "px\t" << px << std::endl;
    // std::cout << "size px\t" << sizeof(px) << std::endl;

    std::cout << "px2\t" << px2 << std::endl;
    // std::cout << "size px2\t" << sizeof(px2) << std::endl;
    
    *px2 = 2;

    std::cout << "a\t" << a << std::endl;

    std::cout << "*px\t" << *px << std::endl;
    // std::cout << "size *px " << sizeof(*px) << std::endl;

    std::cout << "*px2\t" << *px2 << std::endl;
    // std::cout << "size *px2 " << sizeof(*px2) << std::endl;

    a = 7;

    std::cout << "a\t" << a << std::endl;

    std::cout << "*px\t" << *px << std::endl;
    // std::cout << "size *px " << sizeof(*px) << std::endl;

    std::cout << "*px2\t" << *px2 << std::endl;
    // std::cout << "size *px2 " << sizeof(*px2) << std::endl;

    return 0;
}
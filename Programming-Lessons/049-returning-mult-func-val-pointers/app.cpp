// Returning multiple function values via pointers --
//  Возврат нескольких значений функций с помощью указателей

#include <iostream>

void Foo(int *pa, int *pb, int *pc)
{
    (*pa) = 555;
    (*pb)++;
    (*pc) = -20;
}

int main()
{
    int a = 0, b = 0, c = 1;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    std::cout << "Foo" << std::endl;

    Foo(&a, &b, &c);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    return 0;
}
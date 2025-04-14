// reference -- ссылки
#include <iostream>

int main()
{
    int a = 5;
    
    int *pa = &a;

    int &aref = a;
    
    int *paa = &aref;
    std::cout << "*pa\t" << *pa << std::endl;
    //std::cout << "a\t" << a << std::endl;
    std::cout << "&aref\t" << aref << std::endl;
    std::cout << "paa\t" << *paa << std::endl;

    aref = 55;

    std::cout << "a\t" << a << std::endl;

    return 0;
}
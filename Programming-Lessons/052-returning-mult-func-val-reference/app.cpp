// returning-mult-func-val-reference -- возврат нескольких значений через ссылки

#include <iostream>

void Foo(int &a, int &b, int &c)
{
    a = 10;
    b *= 2;
    c -= 100;
}

int main()
{
    int a = 0, b = 4, c = 34;

    std::cout << "a =  " << a << std::endl;
    std::cout << "b =  " << b << std::endl;
    std::cout << "c =  " << c << std::endl;

    Foo(a, b, c);

    std::cout << "a =  " << a << std::endl;
    std::cout << "b =  " << b << std::endl;
    std::cout << "c =  " << c << std::endl;

    return 0;
}
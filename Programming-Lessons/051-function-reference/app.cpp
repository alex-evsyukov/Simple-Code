// function-reference -- передача параметров по ссылке
#include <iostream>

void Foo(int a)
{
    a = 1;
}

void Foo2(int &a)
{
    a = 2;
}

void Foo3(int *a)
{
    *a = 3;
}

int main()
{
    int value = 5;

    std::cout << "value = " << value << std::endl;

    std::cout << "Foo = " << std::endl;
    Foo(value);
    std::cout << "value = " << value << std::endl;

    std::cout << "Foo2 = " << std::endl;
    Foo2(value);
    std::cout << "value = " << value << std::endl;

    std::cout << "Foo3 = " << std::endl;
    Foo3(&value);
    std::cout << "value = " << value << std::endl;

    return 0;
}
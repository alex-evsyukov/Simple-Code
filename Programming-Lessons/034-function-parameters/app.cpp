// function parameters -- передача параметров в функцию
#include <iostream>

int foo(int a) // это одна переменная
{
    return ++a;
}

int main()
{
    //int a = 1; // это другая переменная - (копия)
    int value = 1;
    value = foo(value);

    std::cout << value << std::endl; // output: 2

    return 0;
}
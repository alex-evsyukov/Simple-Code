// Passing parameters to a function by pointer 
// -- Передача параметров в функцию по указателю

/**
 * Передача аргументов в функцию
 * Как вернуть два и более значения из функции
 */

#include <iostream>

void Foo(int *pa)
{
    (*pa)++;
    *pa = *pa + 10;
}

int main()
{
    int a = 0;
    std::cout << a << std::endl;

    Foo(&a);

    std::cout << a << std::endl;

    return 0;
}
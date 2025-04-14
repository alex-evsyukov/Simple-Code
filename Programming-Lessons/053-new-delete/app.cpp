/**
 * Работа с динамической памятью. Операторы выделения памяти new и delete.
 */

#include <iostream>

int main()
{
    int *pa = new int;
    *pa = 10;
    std::cout << *pa << std::endl;
    delete pa;

    return 0;
}
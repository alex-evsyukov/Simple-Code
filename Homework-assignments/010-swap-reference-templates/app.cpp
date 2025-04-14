/**
 * Написать ШАБЛОННУЮ функцию, которая
 * меняет местами значения
 * 2-х переменных с помощью ССЫЛОК
 */

#include <iostream>
#include <string>

template <class T>

void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    std::string var1 = "Hello";
    std::string var2 = "World";

    std::cout << "var1 = " << var1 << std::endl;
    std::cout << "var2 = " << var2 << std::endl;

    std::cout << "Swap() " << std::endl;
    Swap(var1, var2);

    std::cout << "var1 = " << var1 << std::endl;
    std::cout << "var2 = " << var2 << std::endl;

    return 0;
}
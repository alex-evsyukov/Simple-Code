// function overload -- перегрузка функции
#include <iostream>

int sum(int a, int b, int c)
{
    return a + b + c;
}
int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}
int main()
{
    std::cout << sum(5, 6) << std::endl; // out: 11
    std::cout << sum(1.2, 3.6) << std::endl; // out 4.8
    std::cout << sum(5, 6, 7) << std::endl; // out 18
    return 0;
}
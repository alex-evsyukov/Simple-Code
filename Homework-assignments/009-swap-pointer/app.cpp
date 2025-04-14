// Поменять значения двух переменных местами
// с помощью указателей

#include <iostream>

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int var1 = 31, var2 = 76;

    std::cout << "var1 = " << var1 << std::endl;
    std::cout << "var2 = " << var2 << std::endl;

    std::cout << "Swap() " << std::endl; 
    Swap(&var1, &var2);

    std::cout << "var1 = " << var1 << std::endl;
    std::cout << "var2 = " << var2 << std::endl;

    return 0;
}
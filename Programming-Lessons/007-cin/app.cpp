// cin -- ввод данных

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    int Var, Var2;

    std::cout << "Введите первое число: ";
    std::cin >> Var;
    std::cout << "Введите второе число: ";
    std::cin >> Var2;

    std::cout << "Число 1 = " << Var << std::endl;
    std::cout << "Число 2 = " << Var2 << std::endl;
    
    return 0;
}
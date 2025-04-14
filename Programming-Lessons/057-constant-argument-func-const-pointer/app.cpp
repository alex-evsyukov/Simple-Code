//Constant arguments of the function. A constant pointer. --Константные аргументы функции. Константный указатель.

#include <iostream>

void FillArray(int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}


int main()
{
    int array = {};
    FillArray();
    ShowArray();
    return 0;
}
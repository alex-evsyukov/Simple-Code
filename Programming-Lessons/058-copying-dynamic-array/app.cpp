// Копирование динамического массива

#include <iostream>

void FillArray(int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    int size = 10;

    int *firstArray = new int[size];
    int *secondArray = new int[size];

    FillArray(firstArray, size);
    FillArray(secondArray, size);

    std::cout << "FirstArray = \t";
    ShowArray(firstArray, size);
    std::cout << "SecondArray = \t";
    ShowArray(secondArray, size);

    std::cout << "================" << std::endl;

    // firstArray = secondArray;

    // FillArray(firstArray, size);
    // FillArray(secondArray, size);

    // std::cout << "FirstArray = \t";
    // ShowArray(firstArray, size);

    // std::cout << "SecondArray = \t";
    // ShowArray(secondArray, size);

    delete[] firstArray;

    firstArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        firstArray[i] = secondArray[i];
    }

    std::cout << "firstArray: \t";
    for (int i = 0; i < size; i++)
    {
        std::cout << firstArray[i] << "\t";
    }
    std::cout << std::endl;
    
    std::cout << "secondArray: \t";
    for (int i = 0; i < size; i++)
    {
        std::cout << secondArray[i] << "\t";
    }

    std::cout << std::endl;

    std::cout << "firstArray[0]: \t";
    std::cout << firstArray << std::endl;
    std::cout << "secondArray[0]: \t";
    std::cout << secondArray << std::endl;
    delete[] firstArray;
    delete[] secondArray;

    return 0;
}
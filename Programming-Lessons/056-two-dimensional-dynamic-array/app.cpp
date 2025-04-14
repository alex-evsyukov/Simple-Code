// Two-dimensional dynamic array -- Двумерный динамический массив

#include <iostream>

int main()
{
    int rows = 0;
    int cols = 0;

    std::cout << "enter rows size: ";
    std::cin >> rows;
    std::cout << "enter cols size: ";
    std::cin >> cols;

    // создаем двумерный массив (создаем указатель на массив указателей)
    int **arr = new int *[rows];

    // проходим по массиву указателей
    for (int i = 0; i < rows; i++)
    {
        // в массиве указателей создаем указатели на массивы
        arr[i] = new int[cols];
    }

    // заполняем массивы значениями
        // проходим по массиву указателей
    for (int i = 0; i < rows; i++)
    {
            // проходим по элементам массива
        for (int j = 0; j < cols; j++)
        {
            // присваеваем значение элементу массива от 0 до 20
            arr[i][j] = rand() % 20;
        }
    }

    // вывод массива
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // освобождаем память удалением указателя на массив элементов

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    // освобождаем память удалением указателя на указатели массивов
    delete[] arr;

    return 0;
}
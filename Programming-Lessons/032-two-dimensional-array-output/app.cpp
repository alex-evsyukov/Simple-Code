#include <iostream>

int main()
{
    const int ROWS = 5;
    const int COLS = 8;

    int arr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
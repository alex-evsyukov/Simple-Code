#include <iostream>
#include <ctime>

#define SIZE 10

// прототипы
void init_array_no_repeat(int array[], int size, int min, int max);
void init_array(int array[], int size, int min, int max);
void print_array(int array[], int size);

int main()
{
    int arr[SIZE];
    int min = 0;
    int max = 0;
    std::cout << "enter min and max: ";
    std::cin >> min >> max;

    //init_array_no_repeat(arr, SIZE, min, max);
    init_array(arr, SIZE, min, max);
    print_array(arr, SIZE);

    return 0;
}

void init_array_no_repeat(int array[], int size, int min, int max)
{
    srand(time(NULL)); // <--- нужна библиотека <ctime>

    // for (int i = 0; i < size; i++)
    // {
    //     array[i] = min + rand() % (max - min + 1);
    // }
    bool already_there;

    for (int i = 0; i < size;)
    {
        already_there = false;
        int new_random_value = min + rand() % (max - min + 1);

        for (int j = 0; j < i; j++)
        {
            if (array[j] == new_random_value)
            {
                already_there = true;
                break;
            }
        }

        if (!already_there)
        {
            array[i] = new_random_value;
            i++;
        }
        // array[i] = min + rand() % (max - min + 1);
    }
}

void init_array(int array[], int size, int min, int max)
{
    srand(time(NULL));
    
    for (int i = 0; i < size; i++)
    {
        array[i] = min + rand() % (max - min + 1);
    }
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << ' ';
    }
}
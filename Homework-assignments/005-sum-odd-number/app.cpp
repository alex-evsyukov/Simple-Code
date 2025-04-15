/*
    Написать программу, которая находит сумму всех нечетных чисел
    в диапазоне, указанном пользователем.
*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int min; // минимальное значение
    int max; // максимальное значение
    int sum = 0; // сумма нечетных чисел диапазона

    cout << "enter min number: ";
    cin >> min;
    cout << "enter max number: ";
    cin >> max;

    if (min <= max)
    {
        do
        {
            if (min % 2 != 0)
            {
                cout << min << " ";
                sum += min;
            }
            min++;
        } while (min <= max);
    cout << "\nThe sum of the odd numbers from the range = " << sum << endl;
    }
    else
    {
        cout << "Error: the maximum value is less than the minimum value" << endl;
    }

    return 0;
}
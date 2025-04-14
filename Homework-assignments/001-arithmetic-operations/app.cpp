/*
    Введите три числа и выведите на экран
    значение суммы, произведения и среднее
    арифметическое этих чисел.
*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b, c;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;

    cout << "Сумма: " << a + b + c << endl;
    cout << "Произведение: " << a * b * c << endl;
    cout << "Среднее: " << (double)(a + b + c) / 3 << endl; // приведение типов

    return 0;
}
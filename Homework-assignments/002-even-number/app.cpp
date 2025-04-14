/*
    Напишите программу, проверяющую число, 
    введенное с клавиатуры на четность.
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    int var;
    cout << "Введите целое число: ";
    cin >> var;

    if (var % 2 == 0)
    {
        cout << "Введенное число четное" << endl;
    }
    else
    {
        cout << "Введенное число нечетное" << endl;
    }
    return 0;
}
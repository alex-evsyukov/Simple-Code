/*
    Написать простой калькулятор. 
    Пользователь вводит значение двух переменных. 
    Описать меню в консоли для математических 
    операций сложения, вычитания, умножения, деления. 
    Через оператор switch реализовать математическую 
    операцию соответствующую пункту меню.
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a,b;
    char op;
    cout << "\tКалькулятор" << endl;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "\tВыберите операцию: \n\t'+'-сложение\n\t'-'-вычитание\n\t'*'-умножение\n\t'/'- деление\n";
    cin >> op;

    switch (op)
    {
    case '+':
        /* code */
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << (double)a / b << endl;
        break;
    default:
        cout << "Я не знаю такой операции" << endl;
        break;
    }

    return 0;
}
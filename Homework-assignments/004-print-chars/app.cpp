/*
    Разработать программу, которая выводит на экран линию из символов.
    Число символов, какой использовать символ, и какая будет линия - 
    вертикальная, или горизонтальная - указывает пользователь.
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    char ch; // символ
    int quantity_ch; // количество символов
    int i = 0; // счетчик для итерации циклов
    int location; // расположение символов

    cout << "Enter the quantity: "; // ввести количество символов
    cin >> quantity_ch;
    cout << "Enter char: "; // ввести символ
    cin >> ch;

    cout << "How should the symbols be placed?" << endl;
    cout << "Enter:\n1. Vertically\n2. Horizontally" << endl;
    cin >> location; //ввести 1 или 2

    switch (location)
    {
    case 1:
        while (i < quantity_ch)
        {
            cout << ch << endl;
            i++;
        }
        break;
    case 2:  
        do
        {
            cout << ch;
            i++;

        } while (i < quantity_ch);
        break;
    default:
        break;
    }

    return 0;
}
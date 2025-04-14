// switch -- оператор множестенного выбора

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a;
    cin >> a;

    switch (a)
    {
    case 1:
        /* code */
        cout << "Вы ввели 1" << endl;
        break;
    case 2:
        cout << "Вы ввели 2" << endl;
        break;
    default:
        // действие по умолчанию
        cout << "Я не знаю этого числа!" << endl;
        break;
    }

    return 0;
}
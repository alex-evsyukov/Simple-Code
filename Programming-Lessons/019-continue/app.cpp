// continue -- ключевое слово
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "cycle start" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue; // пропустит итерацию и продолжит выполнение цикла
        }
         cout << "variable i = " << i << endl;
    }
    cout << "cycle end" << endl;

    return 0;
}
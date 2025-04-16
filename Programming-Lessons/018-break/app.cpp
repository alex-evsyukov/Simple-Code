// break -- ключевое слово
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "cycle start" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "variable i = " << i << endl;

        if (i == 5)
        {
            break; // прекращает работу цикла
        }
    }
    cout << "cycle end" << endl;
    
    int j = 0;
    cout << "cycle start" << endl;
    while (true) // бесконечный цикл
    {
        cout << "variable j = " << j << endl;
        j++;

        if (j == 6) // прекращает работу цикла
        {
            break;
        }
    }

    cout << "cycle end" << endl;

    return 0;
}
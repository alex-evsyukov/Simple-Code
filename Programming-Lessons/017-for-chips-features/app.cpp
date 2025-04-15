// for -- цикл. Фишки и фичи
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int i = 0; // глобальная переменная
    int j = 0; // глобальная переменная
    cout << "first cycle" << endl;
    for (; i < 10; i++)
      {
        cout << "variable i = " << i << endl;
      }
    cout << "second cycle" << endl;
    for (; i < 20;)
    {
        cout << "variable i = " << i << endl;
        i++;
    }
    // cout << "third cycle" << endl;
    // for (; ;) // бесконечный цикл
    // {
    //     cout << "variable i = " << i << endl;
    //     i++;
    // } 
    cout << "fourth cycle" << endl;
    for (i = 0, j = 10; i < 10; i++, j--)
    {
        cout << "variable i = " << i << endl;
        cout << "variable j = " << j << endl;
    }
    

    return 0;
}
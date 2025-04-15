// while -- цикл
/*
        Конструкция:
    while (утверждение)
    {
        действие для повторения;
    }
*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a = 10;

      while (a < 20)
      {
        cout << "var a = " << a << endl;
        a++;
      }

    return 0;
}
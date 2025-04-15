// do while -- цикл
/*
        Конструкция
    do
    {
        инструкция;
    } while (утверждение);

*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a = 18;

    do
    {
        cout << "var a = " << a << endl;
        a++;

    } while (a < 20);
    
    
    // while (a < 20)
    // {
    //   cout << "var a = " << a << endl;
    //   a++;
    // }

    return 0;
}
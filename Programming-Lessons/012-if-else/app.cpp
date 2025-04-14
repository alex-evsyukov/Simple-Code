#include <iostream>
using namespace std;

/*
    if (утверждение или выражение)
    {
        действие 1
    }
    else
    {
        действие 2    
    }

*/

int main()
{
    setlocale(LC_ALL, "ru");

    bool isRane = true;

    if (isRane)
    {
        cout << "Идет дождь, нам нужен зонт!" << endl;
    }
    else
    {
        cout << "Дождя нет, зонт не нужен!" << endl;
    }

    return 0;
}
// nested loop -- вложенный цикл
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    for (int i = 1; i < 5; i++)
    {
        cout << "Worked 1st cycle for [iter num]: " << i << endl;
        for (int j = 1; j < 5; j++)
        {
            cout << "\tWorked 2nd cycle for [iter num]: " << j << endl;
        }
        
    }
      
    return 0;
}
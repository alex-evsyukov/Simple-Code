// Logical operations -- логические операции
#include <iostream>
using namespace std;

int main()
{
    cout << (4 < 5) << endl; // 1 (true)
    cout << (5 <= 5) << endl; // 1 (true)
    cout << (4 == 5 ) << endl; // 0 (false)
    cout << (1 != 2) << endl; // 1 (true)

    int a = 2;
    int b = 3;

    cout << (a == b) << endl; // 0 (false)
    cout << (a < b) << endl; // 1 (true)
    return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
    const int size = 5;
    int arr[size]{55, 511, 2, 123, 95};

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ":";
    }
    cout << endl;
    return 0;
}
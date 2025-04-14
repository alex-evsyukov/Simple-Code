#include <iostream>

using namespace std;


int main(void)
{
    const int SIZE = 10;
    int arr[SIZE];

    int a = sizeof(arr);
    int b = sizeof(int);

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }

    cout << endl << a / b << endl;

    return 0;
}
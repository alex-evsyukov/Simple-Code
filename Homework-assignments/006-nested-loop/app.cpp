/*
   Написать программу, которая выводит на экран 
   прямоугольник символом *. 
   Высота и ширина задаётся пользователем. 
*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    char ch = '*';
    int heigth;
    int width;
    
    cout << "Enter height: \t";
    cin >> heigth;  
    cout << "Enter width: \t";
    cin >> width;

    for (int i = 0; i < heigth; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
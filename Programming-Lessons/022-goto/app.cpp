// goto -- ключевое слово (плохое слово)
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "One" << endl;

    goto link;
    
    cout << "Two" << endl; // эта строка не выведится
    cout << "Three" << endl; // и эта строка не выведится
    
    link: // ссылка
    
    cout << "Four" << endl;
    cout << "Five" << endl;

    return 0;
}
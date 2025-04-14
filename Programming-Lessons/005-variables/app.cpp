//variables -- переменные
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int a = 5;
    //a = 5;
    std::cout << a << std::endl; //output: 5
    
    a = 10;
    std::cout << a << std::endl; // output: 10

    int age, b, c;
    age = 10;
    b = 1;
    c = 2;
    std::cout << age << " " << b << " " << c << std::endl;

    char f = 'f';
    std::cout << f << std::endl;

    bool t = false;
    std::cout << t << std::endl;

    double r = 2.345;
    std::cout << r << std::endl;
    
    return 0;
}
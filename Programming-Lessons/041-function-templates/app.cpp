// function templates -- шаблоны функции (офигенная вещь)
#include <iostream>

template <class T1, class T2> /* <-- Шаблон T. В языке C (Си) - <typename T>. 
                                                В языке C++ -<class T>*/
                                /*можно использовать, и то и другое название */
T1 sum(T1 a, T2 b)
{
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    return a + b;
}

int main()
{
    std::cout << sum(5, 10) << std::endl;
    std::cout << sum(5.2, 10) << std::endl;
    
    return 0;
}
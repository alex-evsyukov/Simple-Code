// ключевое слово inline -- Встраиваемая функция

#include <iostream>

inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int result = sum(4, 9);
    std::cout << result << std::endl;
    return 0;
}
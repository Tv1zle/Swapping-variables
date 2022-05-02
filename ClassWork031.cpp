
#include <iostream>

int main()
{
    //С третьей переменной
    int a = 10;
    int b = 15;
    
    int c = 0;

    c = a;
    a = b;
    b = c;

    std::cout << a << " " << b << "\n";

    //Без третьей переменной
    a = 10;
    b = 15;

    a = a + b;
    b = b - a;
    b = -b;
    a = a - b;

    std::cout << a << " " << b << "\n";
}

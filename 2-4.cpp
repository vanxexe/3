#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");
    double r;
    std::cout << "Введіть радіус кола: ";
    std::cin >> r;;
    double L = 2*(3.14159*r);
    std::cout << "Довжина кола: " << L;
    return 0;
}
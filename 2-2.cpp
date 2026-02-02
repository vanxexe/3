#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    double a, b;
    std::cout << "Введіть Ваші два числа: ";
    std::cin >> a >> b;
    double avg = (a+b)/2;
    std::cout << "Середнє значення: " << avg;

    return 0;
}
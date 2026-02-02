#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    double c;

    std::cout << "Введіть температуру в Цельсіях: ";
    std::cin >> c;

    double f = c*1.8+32;
    double k = c+273.15;

    std::cout << "\tТемпературна конвертація\n";
    std::cout << "-------------------------------------------\n";
    std::cout << "Цельсія: \t" << c << " °C\n";
    std::cout << "Фаренгейти: \t" << f << " °F\n";
    std::cout << "Кельвіни:\t" << k << " K\n";

    return 0;
}
#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    double ua, euv, zlv;
    std::cout << "Введіть кількість грн: ";
    std::cin >> ua;
    std::cout << "Введіть курс євро: ";
    std::cin >> euv;
    std::cout << "Введіть курс злотий: ";
    std::cin >> zlv;

    double eu = ua/euv;
    double zl = ua/zlv;

    std::cout << "\t Обмінник\n";
    std::cout << "-----------------------------\n";
    std::cout << "ГРН: \t\t" << ua << std::endl;
    std::cout << "ЄВРО: \t\t" << eu << std::endl;
    std::cout << "ЗЛОТИЙ: \t" << zl << std::endl;

    return 0;
}
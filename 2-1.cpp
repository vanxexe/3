#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    std::string fn, ln;
    int age;
    std::cout << "\tАнкета" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Введіть Ваше ім'я: ";
    std::cin >> fn;
    std::cout << "Введіть Ваше прізвище: ";
    std::cin >> ln;
    std::cout << "Введіть Ваш вік: ";
    std::cin >> age;
    std::cout << " " << std::endl;
    std::cout << "\tАнкета" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Ім'я: " << fn << std::endl;
    std::cout << "Прізвище: " << ln << std::endl;
    std::cout << "Вік: " << age << std::endl;

    return 0;
}
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "");
    std::string pay[] = {
        "Картка", "Готівка"
    };
    std::string pob[] = {
        "Бажаємо гарного настрою \nта світлих моментів щодня.", "Нехай у житті буде більше радості, \nтепла й приємних сюрпризів.", "Бажаємо здоров’я, спокою \nта здійснення маленьких мрій."
    };
    std::cout << "\t\tСільпо" << std::endl;
    std::cout << "\tВул. М. Грушевського 7" << std::endl;
    std::cout << "\tКасир: Іванов А." << std::endl;
    std::cout << "_________________________________________" << std::endl;
    std::cout << "Найм. товару \t Ціна \t Кіль. \t Сума " << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "Шоколад \t 55.60 \t x1 \t 55.60" << std::endl;
    std::cout << "Сік \t\t 76.00 \t х2 \t 152.00" << std::endl;
    std::cout << "Хліб \t\t 34.50 \t х1 \t 34.50" << std::endl;
    std::cout << "Сир \t\t 105.50  х4 \t 422.00" << std::endl;
    std::cout << "Молоко \t\t 67.00 \t х3 \t 201.00" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "До сплати: \t\t\t 865.10" << std::endl;
    std::cout << "_________________________________________" << std::endl;
    srand(time(0));
    int index = rand () % 2;
    std::cout << "Спосіб оплати: \t" << pay[index] << std::endl;
    std::cout << "_________________________________________" << std::endl;
    int indpob = rand () % 2;
    std::cout << pob[indpob] << std::endl;
    std::cout << "\t  Дякуємо за покупку!" << std::endl;
    return 0;
}
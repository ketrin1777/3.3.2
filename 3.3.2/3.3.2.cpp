// 3.3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <clocale>
#include <Windows.h>

class Counter
{
public:
    Counter() { countNum = 1; };
    Counter(int num) { countNum = num; };

    void upCount() { countNum++; };
    void downCount() { countNum--; };

    int getCount() { return countNum; };

private:

    int countNum;

};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Counter count;
    std::string inpText;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> inpText;

    if (inpText == "да")
    {
        int startNum;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> startNum;

        count = Counter(startNum);
    }

    while (inpText != "x")
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> inpText;

        if (inpText == "+")
        {
            count.upCount();
        }
        else if(inpText == "-")
        {
            count.downCount();
        }

        else if (inpText == "=")
        {
            std::cout << count.getCount() << std::endl;
        }
        else if (inpText == "x")
        {
            std::cout << "До свидания!" << std::endl;
        }
    }
}

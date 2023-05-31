#include <iostream>
#include <Windows.h>
#include "Class.h"

Counter Create(std::string);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Хотите задать начальное значение? Введите \"да\" или \"нет\": ";
    std::string cmd{};
    std::cin >> cmd;
    Counter counterObj = Create(cmd);
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> cmd;
        if (cmd == "+") {
            counterObj.add();
        }
        if (cmd == "-") {
            counterObj.sub();
        }
        if (cmd == "=") {
            std::cout << counterObj.show() << "\n";
        }
    } while (cmd != "х");
}

Counter Create(std::string TrueOrFalse) {
    if (TrueOrFalse == "да") {
        std::cout << "Введите начальное значение: ";
        int initialNumber{};
        std::cin >> initialNumber;
        Counter counterObj(initialNumber);
        return counterObj;
    }
    else if (TrueOrFalse == "нет") {
        Counter counterObj;
        return counterObj;
    }
}
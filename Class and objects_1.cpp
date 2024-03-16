#include <iostream>
class Calculator {
private:
    int num1;
    int num2;
public:
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num2 - num1;
    }
    double subtract_2_1() {
        return num1 - num2;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return 1;
        }
        return 0;
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return 1;
        }
        return 0;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    double num1=0;
    double num2=0;
    Calculator a1;

    while (1) {

        while (!a1.set_num1(num1)) {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (num1 == 0)
                std::cout << "Неверный ввод!\n";
        }

        while (!a1.set_num2(num2)) {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (num2 == 0)
                std::cout << "Неверный ввод!\n";
        }

        std::cout << "num1 + num2 = " << a1.add()<< std::endl;
        std::cout << "num1 - num2 = " << a1.subtract_2_1() << std::endl;
        std::cout << "num2 - num1 = " << a1.subtract_1_2() << std::endl;
        std::cout << "num1 * num2 = " << a1.multiply() << std::endl;
        std::cout << "num1 / num2 = " << a1.divide_1_2() << std::endl;
        std::cout << "num1 / num2 = " << a1.divide_2_1() << std::endl;
        num1 = 0;
        num2 = 0;
    }
}
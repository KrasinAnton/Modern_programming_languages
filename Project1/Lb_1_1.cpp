#include <iostream>
#include <Windows.h>

int power(int base, int exponent);

int main() {
    int base, exponent;
    SetConsoleOutputCP(1251); 

    SetConsoleCP(1251);

    std::cout << "������� ���������: ";
    std::cin >> base;

    std::cout << "������� ���������� �������: ";
    std::cin >> exponent;

    int result = power(base, exponent);

    std::cout << base << " � ������� " << exponent << " = " << result << std::endl;

    return 0;
}

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float pi{ 3.14 }, radius;
    int degree;

    cout << "Введите радиус круга: ";
    if ((cin >> radius)) {
        cout << "Введите градусную меру сектора: ";
        if ((cin >> degree)) {
            cout << "Площадь сектора равна: ";
            cout << pi * (radius * radius) * (degree / 360.0);
        }
        else {
            cout << "Вы ввели не число";
        }
    }
    else {
        cout << "Вы ввели не число";
    }

    return 0;
}

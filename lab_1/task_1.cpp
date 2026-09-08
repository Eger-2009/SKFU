#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "-----------" << "\n";
    cout << "Объём куба" << "\n";
    cout << "-----------" << "\n";

    float edge_cube, volume;

    cout << "Введите размер ребра куба: ";

    if (!(cin >> edge_cube)) {
        cout << "Вы ввели не число!";
    }
    else {
        volume = edge_cube * edge_cube * edge_cube;

        cout << "Объём куба равен: ";
        cout << volume;
    }

    return 0;
}

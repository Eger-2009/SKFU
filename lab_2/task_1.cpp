#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	cout << "===========================" << "\n";
	cout << "Перевод метров в сантиметры" << "\n";
	cout << "===========================" << "\n\n";

	double res, metr;

	while (true) { // цикл для возможности ввести новое значение в случае ошибки
		cout << "Введите число метров: ";
		if (cin >> metr) {
			res = metr * 100;
			break;
		}
		else {
			cerr << "\nОшибка ввода!\n"; // поток для ошибок
			cin.clear(); //сброс флага ошибки
			cin.ignore(10000, '\n'); // очистка буфера до 10000 символов
		}

	}

	cout << "Результат выполнения программы: " << res << " сантиметров";
		
	return 0;
}
